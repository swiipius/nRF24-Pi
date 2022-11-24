#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/gpio.h>
#include <linux/delay.h>

#define led 4

MODULE_DESCRIPTION("Led Module");
MODULE_AUTHOR("ARECE");
MODULE_LICENSE("GPL");

static int dummy_init(void)
{
    printk("Start process \n");

    // Led
    if (!gpio_is_valid(led))
    {
        printk("Not a valid pin");
        return -1;
    }
    else
    {
        if (gpio_request(led, "GPIO_4") < 0)
        {
            printk("Request failed %d", gpio_request(led, "GPIO_4"));
            return -1;
        }
        else
        {
            int export = gpio_export(led, false); // the user can't change the directory
            int direction = gpio_direction_output(led, 0);
            gpio_set_value(led, 1);
            msleep(1000);
            gpio_set_value(led, 0);
        }
    }
}

static void dummy_exit(void)
{
    gpio_set_value(led, 0);
    gpio_free(led);
    gpio_unexport(led);
    printk("Stop process\n");
}
module_init(dummy_init);
module_exit(dummy_exit);