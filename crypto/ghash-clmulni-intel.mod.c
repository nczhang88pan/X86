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
	{ 0x431b569e, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0x46294d64, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x83139606, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0xfafbf55f, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x7691507b, __VMLINUX_SYMBOL_STR(cryptd_shash_desc) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x63806786, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0xd1794681, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0xbb482816, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x8c7f0dc4, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb454da24, __VMLINUX_SYMBOL_STR(cryptd_ahash_child) },
	{ 0x81e965e0, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x958fe7a4, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0x54474695, __VMLINUX_SYMBOL_STR(cryptd_alloc_ahash) },
	{ 0xb3c6a65c, __VMLINUX_SYMBOL_STR(cryptd_free_ahash) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0xa3212cb4, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cryptd";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "960329069F68924E52F5DA6");
