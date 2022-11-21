/* save the module as module.c */
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("My first kernel module");
MODULE_AUTHOR("ECE");
MODULE_LICENSE("GPL");

static int dummy_init(void)
{
printk("Hellow \n");
return 0;
}

static void dummy_exit(void)
{
printk("Bye\n");
}
module_init(dummy_init);
module_exit(dummy_exit);
