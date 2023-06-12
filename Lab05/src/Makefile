KERNEL_VER := $(shell uname -r)
KERNEL_DIR := /lib/modules/$(KERNEL_VER)/build
#KERNEL_DIR := ./modulebuild

obj-m += kshram.o

.PHONY: all
all: check_msg check_resize check_fork
	make -C $(KERNEL_DIR) M=$(PWD) modules

%: %.c
	gcc -std=c99 $< -o $@

.PHONY: clean
clean:
	rm -f check_resize check_msg check_fork
	make -C $(KERNEL_DIR) M=$(PWD) clean

