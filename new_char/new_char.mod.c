#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd7c8ffc3, "module_layout" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x73d512b5, "cdev_del" },
	{ 0x9a5a03c5, "cdev_add" },
	{ 0xca270a0b, "cdev_alloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xb35dea8f, "__arch_copy_to_user" },
	{ 0x84bc974b, "__arch_copy_from_user" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0x7c32d0f0, "printk" },
	{ 0xcf2a6966, "up" },
	{ 0x1fdc7df2, "_mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4D9EFDF14212AB365AC18E5");
