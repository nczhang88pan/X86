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
	{ 0x8f02ac4d, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit_one) },
	{ 0x1ea560f0, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x85e99204, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x1b976527, __VMLINUX_SYMBOL_STR(lrw_crypt) },
	{ 0xdc90f07, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit) },
	{ 0x5ddb33e9, __VMLINUX_SYMBOL_STR(__serpent_encrypt) },
	{ 0xf6fdd4a3, __VMLINUX_SYMBOL_STR(serpent_setkey) },
	{ 0x3fcbf0b1, __VMLINUX_SYMBOL_STR(glue_ctr_crypt_128bit) },
	{ 0x97d86371, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xcd074900, __VMLINUX_SYMBOL_STR(lrw_init_table) },
	{ 0xa91456c1, __VMLINUX_SYMBOL_STR(__ablk_encrypt) },
	{ 0x8a1a99ad, __VMLINUX_SYMBOL_STR(__serpent_decrypt) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x30635782, __VMLINUX_SYMBOL_STR(cpu_has_xfeatures) },
	{ 0xb5357075, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0xff81985b, __VMLINUX_SYMBOL_STR(glue_cbc_decrypt_128bit) },
	{ 0x5639600c, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x2819e579, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0x396b5173, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x77b39cb4, __VMLINUX_SYMBOL_STR(__serpent_setkey) },
	{ 0x300d97b9, __VMLINUX_SYMBOL_STR(glue_ecb_crypt_128bit) },
	{ 0x3864eb66, __VMLINUX_SYMBOL_STR(lrw_free_table) },
	{ 0x91b63a9d, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0xe1ecf7b4, __VMLINUX_SYMBOL_STR(glue_cbc_encrypt_128bit) },
	{ 0xcc87bfe6, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=glue_helper,lrw,serpent_generic,ablk_helper";


MODULE_INFO(srcversion, "6B81E5BB4BF792D89F010CA");
