#include <linux/module.h>

/* Module initialization entry point */
static int __init my_kernel_module_init(void)
{
	pr_info("Hello World!\n");
	return 0;
}

/* Module clean-up entry point */
static void __exit my_kernel_module_exit(void)
{
	pr_info("Good bye!\n");
}

/* This is registration of above entry points with kernel */
module_init(my_kernel_module_init);
module_exit(my_kernel_module_exit);

/* This is descriptive information abot the module */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("george");
MODULE_DESCRIPTION("A kernel module to print some messages");

