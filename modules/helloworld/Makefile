obj-m += helloworld_lkm.o

PWD :=  $(shell pwd)
MODDIR := /lib/modules/$(shell uname -r)/build/

all:
		make -C $(MODDIR) M=$(PWD) modules
install:
		make -C $(MODDIR) M=$(PWD) modules_install
clean:
		make -C $(MODDIR) M=$(PWD) clean 
