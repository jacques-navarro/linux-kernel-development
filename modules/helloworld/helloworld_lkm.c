#include <linux/init.h>
#include <linux/module.h>

MODULE_AUTHOR("Jacques Navarro");
MODULE_DESCRIPTION("Loadable Kernel Module hello world");
MODULE_LICENSE("GPL");

static int  __init helloworld_lkm_init(void) {
    printk(KERN_INFO "Hello, World!\n");
    return 0;
}

static void __exit helloworld_lkm_exit(void) {
    printk(KERN_INFO "Goodbye, World!\n");
}

module_init(helloworld_lkm_init);
module_exit(helloworld_lkm_exit);
