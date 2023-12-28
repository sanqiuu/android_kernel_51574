# include <linux/module.h>  				//任何模块都必须包含，定义了可动态加载到内核的模块所需要的必要信息
# include <linux/kernel.h>  				//里面包含常用的内核API，例如内核打印函数printk()
#include "arch.h"
#include "core_hook.h"
static int __init kerneldbg_init(void)    		//__init将函数hds_init()标记为初始化函数，在模块被装载到内核时调用hds_init()
{
	pr_info("Hello kernel\n");		//注意末尾不要忘记加换行\n,否则打印会出现某些小的错误
	kdbg_core_init();
	return 0;
}  

static void __exit kerneldbg_exit(void)			//清除函数,在模块被卸载之前调用
{
	pr_info("Goodbye kernel\n");  //在模块卸载时，将Goodbye kernel这句话打印到日志
}


module_init(kerneldbg_init);   					//引导内核 模块从这里进来
module_exit(kerneldbg_exit);   					//引导内核 模块从这里出去
MODULE_LICENSE("GPL");   					//(必选项) 模块许可证，缺省此句，将导致内核被污染
MODULE_AUTHOR("sanqiu");	 					//(可选项) 描述模块作者
MODULE_DESCRIPTION("Android KernelDBG");  			//(可选项) 描述模块功能 

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5, 0, 0)
MODULE_IMPORT_NS(VFS_internal_I_am_really_a_filesystem_and_am_NOT_a_driver);
#endif