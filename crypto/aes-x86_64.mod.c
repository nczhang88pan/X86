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
	{ 0x40d46b21, __VMLINUX_SYMBOL_STR(crypto_ft_tab) },
	{ 0x71dc9998, __VMLINUX_SYMBOL_STR(crypto_il_tab) },
	{ 0x3dc916b6, __VMLINUX_SYMBOL_STR(crypto_fl_tab) },
	{ 0x715a4cf4, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x54e578d, __VMLINUX_SYMBOL_STR(crypto_aes_set_key) },
	{ 0xcc1e40f, __VMLINUX_SYMBOL_STR(crypto_it_tab) },
	{ 0x78642b21, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "34B3F05EDB0D1829C915764");
