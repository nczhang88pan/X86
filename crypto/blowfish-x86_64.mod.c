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
	{ 0xb76cbd92, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x46403afa, __VMLINUX_SYMBOL_STR(blowfish_setkey) },
	{ 0x1ea560f0, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x191cca1b, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0x4c4f1833, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x97d86371, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x91b63a9d, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xffaadf4d, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xca7e632d, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x45bf1ff3, __VMLINUX_SYMBOL_STR(crypto_inc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=blowfish_common";


MODULE_INFO(srcversion, "93D201E84A3F1E7565618E2");
