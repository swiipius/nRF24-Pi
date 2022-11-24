#ifneq ($(KERNELRELEASE),)
# kbuild part of makefile
#obj-m	:=	first.o	
#else	
# normal makefile
#KDIR	?=	/lib/modules/`uname	-r`/build
#default:
#	$(MAKE)	-C	$(KDIR)	M=$$PWD
#endif
KDIR := ~/projet/rt-kernel/linux

kbuild:
	make	-C	$(KDIR)	M=`pwd`

clean:
	make	-C	$(KDIR)	M=`pwd`	clean
