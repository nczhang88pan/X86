#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x8a52b834, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf6ab9e5d, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xae153286, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x41d5afb5, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x5201f7f4, __VMLINUX_SYMBOL_STR(debugfs_create_x32) },
	{ 0x92449f6b, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xc1af4021, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xcd797565, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x77d175b3, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa352544, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xa9a363f8, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2bf550a1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x533979d1, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x811d305d, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x8af1ecbe, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xd48f2499, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x76f07f18, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xfab76bac, __VMLINUX_SYMBOL_STR(simple_attr_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00000F00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002280sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000958sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001170sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "179ECE23E479C7D09C7AEE3");
