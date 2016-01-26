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
	{ 0xfb93f46a, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x2afea1b1, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8f02ac4d, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit_one) },
	{ 0xe409b491, __VMLINUX_SYMBOL_STR(crypto_aes_decrypt_x86) },
	{ 0x7060bf0a, __VMLINUX_SYMBOL_STR(crypto_aes_encrypt_x86) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x1ea560f0, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x5a4339f6, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x85e99204, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x1b976527, __VMLINUX_SYMBOL_STR(lrw_crypt) },
	{ 0x191cca1b, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0x4c4f1833, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xdc90f07, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit) },
	{ 0xa1867ef9, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x904c7b12, __VMLINUX_SYMBOL_STR(cryptd_free_aead) },
	{ 0x97d86371, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x1724a583, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xcd074900, __VMLINUX_SYMBOL_STR(lrw_init_table) },
	{ 0xb903674c, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xdc3c41a8, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x24aac4d9, __VMLINUX_SYMBOL_STR(crypto_aes_expand_key) },
	{ 0x8025ac3c, __VMLINUX_SYMBOL_STR(crypto_alloc_ablkcipher) },
	{ 0x206dbf8e, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x1ddeebf2, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xb5357075, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5abb6eaf, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x2d5d2dad, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0xfda95cdd, __VMLINUX_SYMBOL_STR(ablk_init_common) },
	{ 0x5639600c, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x2819e579, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8760a1a0, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0xa4eaf006, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xf3cdcb78, __VMLINUX_SYMBOL_STR(crypto_unregister_aeads) },
	{ 0x396b5173, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x47b56fd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xac1ac787, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x3864eb66, __VMLINUX_SYMBOL_STR(lrw_free_table) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x664b0ce1, __VMLINUX_SYMBOL_STR(crypto_register_aeads) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x91b63a9d, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x56886b19, __VMLINUX_SYMBOL_STR(scatterwalk_map) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xffaadf4d, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x424acc6d, __VMLINUX_SYMBOL_STR(scatterwalk_done) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0x58b18781, __VMLINUX_SYMBOL_STR(cryptd_aead_child) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xca7e632d, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x45bf1ff3, __VMLINUX_SYMBOL_STR(crypto_inc) },
	{ 0x9bb86a31, __VMLINUX_SYMBOL_STR(cryptd_alloc_aead) },
	{ 0xcc87bfe6, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0xfa1f4662, __VMLINUX_SYMBOL_STR(scatterwalk_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=glue_helper,aes-x86_64,lrw,cryptd,ablk_helper";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0099*");

MODULE_INFO(srcversion, "C3CF65CE09E8AE81FB3580F");
