#ifndef LED_DRIVER_H_
#define LED_DRIVERH_

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/semaphore.h>
#include <asm/uaccess.h>

#define DEVICE_NAME "led_driver"

struct fake_device
{
    char data[100];
    struct semaphore sem;
} virtual_device;

static struct cdev *mcdev;
static dev_t dev_num;

static int __init driver_entry(void);
static void __exit driver_exit(void);
static int device_open(struct inode *, struct file *);
static int device_close(struct inode *, struct file *);
static ssize_t device_read(struct file *, char *, size_t, loff_t *);
static ssize_t device_write(struct file *, const char *, size_t, loff_t *);

static struct file_operations fops = {
    .owner = THIS_MODULE,
    .read = device_read,
    .write = device_write,
    .open = device_open,
    .release = device_close};
#endif