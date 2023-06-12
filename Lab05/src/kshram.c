#include <linux/version.h>
#include <linux/module.h>
#include <linux/device.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/slab.h>
#include <linux/mm.h>
#include "kshram.h"

#define DEV_NAME "kshram"
#define DEV_SLOTS 8

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("kshram");

static int dev_major;
static struct class *dev_class;
static char *dev_buffer[DEV_SLOTS];
static size_t dev_buffer_size[DEV_SLOTS];

static long dev_ioctl(struct file *file, unsigned int cmd, unsigned long arg) {
  if (cmd == KSHRAM_GETSLOTS) {
    return DEV_SLOTS;
  }
  if (cmd == KSHRAM_GETSIZE) {
    return dev_buffer_size[iminor(file->f_inode)];
  }
  if (cmd == KSHRAM_SETSIZE) {
    dev_buffer[iminor(file->f_inode)] = krealloc(dev_buffer[iminor(file->f_inode)], arg, GFP_KERNEL);
    dev_buffer_size[iminor(file->f_inode)] = arg;
    return arg;
  }
  return 0;
}

static int dev_mmap(struct file *file, struct vm_area_struct *vm_area) {
  int minor = iminor(file->f_inode);
  if (remap_pfn_range(vm_area,
                      vm_area->vm_start,
                      page_to_pfn(virt_to_page(dev_buffer[minor]) + vm_area->vm_pgoff),
                      vm_area->vm_end - vm_area->vm_start,
                      vm_area->vm_page_prot)) {
    return -EAGAIN;
  }
  pr_info("kshram/mmap: idx %d size %lu\n", minor, vm_area->vm_end - vm_area->vm_start);
  return 0;
}

static const struct file_operations dev_fops = {
    .owner = THIS_MODULE,
    .unlocked_ioctl = dev_ioctl,
    .mmap = dev_mmap
};

static int proc_log(struct seq_file *m, void *v) {
  int i = 0;
  for (; i < DEV_SLOTS; i++) {
    seq_printf(m, "%02d: %zu\n", i, dev_buffer_size[i]);
  }
  return 0;
}

static int proc_open(struct inode *inode, struct file *file) {
  return single_open(file, proc_log, NULL);
}

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5, 6, 0)
// proc_ops version
static const struct proc_ops proc_fops = {
    .proc_open = proc_open,
    .proc_read = seq_read,
    .proc_lseek = seq_lseek,
    .proc_release = single_release,
};
#else
// file_operations version
static const struct file_operations proc_fops = {
    .owner = THIS_MODULE,
    .open = proc_open,
    .read = seq_read,
    .llseek = seq_lseek,
    .release = single_release,
};
#endif

#if LINUX_VERSION_CODE >= KERNEL_VERSION(6, 2, 0)
static char *class_devnode(const struct device *dev, umode_t *mode) {
#else
static char *class_devnode(struct device *dev, umode_t *mode) {
#endif
  if (mode) {
    *mode = 0666;
  }
  return NULL;
}

static __init int init(void) {
  int minor = 0;
  if ((dev_major = register_chrdev(0, DEV_NAME, &dev_fops)) < 0) {
    return -1;
  }

  if (IS_ERR(dev_class = class_create(THIS_MODULE, DEV_NAME))) {
    goto err_unregister_chrdev;
  }
  dev_class->devnode = class_devnode;

  do {
    if (IS_ERR(device_create(dev_class, NULL, MKDEV(dev_major, minor), NULL, DEV_NAME"%d", minor))) {
      goto err_release_device;
    }
    dev_buffer[minor] = kzalloc(4096, GFP_KERNEL);
    dev_buffer_size[minor] = 4096;
    pr_info("kshram%d: 4096 bytes allocated @ %px", minor, dev_buffer[minor]);
  } while (++minor < DEV_SLOTS);

  if (IS_ERR(proc_create(DEV_NAME, 0, NULL, &proc_fops))) {
    goto err_release_device;
  }
  pr_info("kshram: initialized.\n");
  return 0;

  err_release_device:
  while (minor--) {
    device_destroy(dev_class, MKDEV(dev_major, minor));
    kfree(dev_buffer[minor]);
  }
  class_destroy(dev_class);
  err_unregister_chrdev:
  unregister_chrdev(dev_major, DEV_NAME);
  pr_info("kshram: failed.\n");
  // Non-zero return means that the module couldn't be loaded.
  return -1;
}

static __exit void cleanup(void) {
  int minor = 0;
  remove_proc_entry(DEV_NAME, NULL);
  for (; minor < DEV_SLOTS; minor++) {
    device_destroy(dev_class, MKDEV(dev_major, minor));
    kfree(dev_buffer[minor]);
  }
  class_destroy(dev_class);
  unregister_chrdev(dev_major, DEV_NAME);

  pr_info("kshram: cleaned up.\n");
}

module_init(init);
module_exit(cleanup);