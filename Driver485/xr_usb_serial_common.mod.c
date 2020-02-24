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
	{ 0xad1a7def, "module_layout" },
	{ 0x387fedc7, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6d2a4a8a, "put_tty_driver" },
	{ 0xc76452f5, "tty_unregister_driver" },
	{ 0x79c8214e, "usb_register_driver" },
	{ 0x721d528e, "tty_register_driver" },
	{ 0x5da2e604, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xf8c56731, "__tty_alloc_driver" },
	{ 0x9e8d524e, "tty_port_register_device" },
	{ 0x6f37edb3, "usb_get_intf" },
	{ 0xcea5c4c0, "usb_driver_claim_interface" },
	{ 0xe0aa2a53, "_dev_info" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4173c080, "device_create_file" },
	{ 0xbb27bacd, "_dev_warn" },
	{ 0x3dcc21ff, "usb_alloc_urb" },
	{ 0xd2aef447, "usb_alloc_coherent" },
	{ 0x73aa261b, "tty_port_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcc51091, "usb_ifnum_to_if" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x8899dc97, "kmem_cache_alloc_trace" },
	{ 0x61a76852, "kmalloc_caches" },
	{ 0x5f754e5a, "memset" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x71c90087, "memcmp" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x7b5191c, "tty_port_open" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84b6c7b, "usb_autopm_put_interface" },
	{ 0xd077a44e, "usb_autopm_get_interface" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbf81fa3a, "tty_standard_install" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0xe968b3ac, "tty_port_close" },
	{ 0xc944fb60, "usb_autopm_get_interface_async" },
	{ 0xa594df94, "tty_port_hangup" },
	{ 0x8f9c1e7a, "tty_port_tty_wakeup" },
	{ 0x37a0cba, "kfree" },
	{ 0xad177b, "usb_put_intf" },
	{ 0x8f74f628, "tty_insert_flip_string_fixed_flag" },
	{ 0xdf116e3, "tty_flip_buffer_push" },
	{ 0x1ca99149, "__tty_insert_flip_char" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x91715312, "sprintf" },
	{ 0xf76b4626, "tty_port_put" },
	{ 0xe33fa11d, "usb_driver_release_interface" },
	{ 0xd7e0e9c7, "usb_free_urb" },
	{ 0xd417c22f, "tty_unregister_device" },
	{ 0x681dc3d8, "tty_kref_put" },
	{ 0xd8feeebd, "tty_vhangup" },
	{ 0xfd2f52b, "tty_port_tty_get" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x16a5bb0b, "device_remove_file" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x619a2b41, "usb_free_coherent" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x72cc230e, "usb_kill_urb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x7df1edf5, "usb_autopm_put_interface_async" },
	{ 0x6785a565, "tty_port_tty_hangup" },
	{ 0xf5615425, "_dev_err" },
	{ 0x82140c03, "usb_submit_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d669763, "memcpy" },
	{ 0xe3c06b50, "dev_printk" },
	{ 0xa2aa6b74, "usb_control_msg" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04E2p1410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1411d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1412d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1414d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1422d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1403d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0DDBB74F7D8F0BF62C6D630");
