export ARCH=arm64
export CROSS_COMPILE=aarch64-linux-gnu-

obj­m += driver.o

# Kernel source directory
KDIR := ~/projet/rt-kernel/linux
PWD := $(shell pwd)

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) clean 