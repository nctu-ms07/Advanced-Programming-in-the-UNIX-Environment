#ifndef __KSHRAM_H__
#define __KSHRAM_H__

#include <asm/ioctl.h>

#define KSHRAM_GETSLOTS _IO('K', 0)
#define KSHRAM_GETSIZE  _IO('K', 1)
#define KSHRAM_SETSIZE  _IO('K', 2)

#endif /* __KSHRAM_H__ */