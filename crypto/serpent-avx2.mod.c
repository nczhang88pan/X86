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
	{ 0x606a8162, __VMLINUX_SYMBOL_STR(serpent_cbc_dec_8way_avx) },
	{ 0xa84ea33d, __VMLINUX_SYMBOL_STR(serpent_ecb_enc_8way_avx) },
	{ 0x1ea560f0, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x85e99204, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x1b976527, __VMLINUX_SYMBOL_STR(lrw_crypt) },
	{ 0x4c4f1833, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xdc90f07, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit) },
	{ 0x5ddb33e9, __VMLINUX_SYMBOL_STR(__serpent_encrypt) },
	{ 0xf6fdd4a3, __VMLINUX_SYMBOL_STR(serpent_setkey) },
	{ 0x3fcbf0b1, __VMLINUX_SYMBOL_STR(glue_ctr_crypt_128bit) },
	{ 0x97d86371, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xc5a8af6, __VMLINUX_SYMBOL_STR(serpent_xts_dec_8way_avx) },
	{ 0xff3c26d, __VMLINUX_SYMBOL_STR(serpent_xts_dec) },
	{ 0xa91456c1, __VMLINUX_SYMBOL_STR(__ablk_encrypt) },
	{ 0xaf84c779, __VMLINUX_SYMBOL_STR(xts_serpent_setkey) },
	{ 0x8a1a99ad, __VMLINUX_SYMBOL_STR(__serpent_decrypt) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x30635782, __VMLINUX_SYMBOL_STR(cpu_has_xfeatures) },
	{ 0xb5357075, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0xff81985b, __VMLINUX_SYMBOL_STR(glue_cbc_decrypt_128bit) },
	{ 0x9ae34b2f, __VMLINUX_SYMBOL_STR(serpent_xts_enc) },
	{ 0x42e51e67, __VMLINUX_SYMBOL_STR(lrw_serpent_exit_tfm) },
	{ 0x9f99663c, __VMLINUX_SYMBOL_STR(serpent_ctr_8way_avx) },
	{ 0x5639600c, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x2819e579, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0x79ff0b7a, __VMLINUX_SYMBOL_STR(serpent_ecb_dec_8way_avx) },
	{ 0x396b5173, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x300d97b9, __VMLINUX_SYMBOL_STR(glue_ecb_crypt_128bit) },
	{ 0x91b63a9d, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0xe1ecf7b4, __VMLINUX_SYMBOL_STR(glue_cbc_encrypt_128bit) },
	{ 0x6b4fe85, __VMLINUX_SYMBOL_STR(lrw_serpent_setkey) },
	{ 0x16a957f, __VMLINUX_SYMBOL_STR(serpent_xts_enc_8way_avx) },
	{ 0x9e018632, __VMLINUX_SYMBOL_STR(__serpent_crypt_ctr) },
	{ 0xcc87bfe6, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=serpent-avx-x86_64,lrw,glue_helper,serpent_generic,ablk_helper";


MODULE_INFO(srcversion, "A1091D2BAF417EB8F698A58");
