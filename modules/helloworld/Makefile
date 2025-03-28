
PWD :=  $(shell pwd)
MODDIR := /lib/modules/$(shell uname -r)/build/

obj-m += helloworld_lkm.o

all:
		make -C $(MODDIR) M=$(PWD) modules
install:
		make -C $(MODDIR) M=$(PWD) modules_install
clean:
		make -C $(MODDIR) M=$(PWD) clean 
