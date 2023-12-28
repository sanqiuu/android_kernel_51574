
#include "linux/capability.h"
#include "linux/cred.h"
#include "linux/dcache.h"
#include "linux/err.h"
#include "linux/init.h"
#include "linux/init_task.h"
#include "linux/kprobes.h"
#include "linux/lsm_hooks.h"
#include "linux/nsproxy.h"
#include "linux/path.h"
#include "linux/uaccess.h"
#include "linux/uidgid.h"
#include "linux/version.h"
#include "linux/mount.h"
#include "linux/fs.h"
#include "linux/namei.h"
#include "linux/rcupdate.h"


#include "core_hook.h"
#include "utils.h"

static int kdbg_ptrace_traceme(struct task_struct *parent)
{
    print("kdbg_ptrace_traceme\n");
	return 0;
}

static struct security_hook_list kdbg_hooks[] = {
	LSM_HOOK_INIT(ptrace_traceme, kdbg_ptrace_traceme),
};

void __init kdbg_lsm_hook_init(void)
{
#if LINUX_VERSION_CODE >= KERNEL_VERSION(4, 11, 0)
	security_add_hooks(kdbg_hooks, ARRAY_SIZE(kdbg_hooks), "kdbg");
#else
	// https://elixir.bootlin.com/linux/v4.10.17/source/include/linux/lsm_hooks.h#L1892
	security_add_hooks(kdbg_hooks, ARRAY_SIZE(kdbg_hooks));
#endif
}

__maybe_unused int kdbg_kprobe_exit(void)
{
	
	return 0;
}
void __init kdbg_core_init(void)
{
#ifndef MODULE
	print("kdbg_lsm_hook_init\n");
	kdbg_lsm_hook_init();
#else
	print("kdbg_kprobe_init\n");
	kdbg_kprobe_init();
#endif
}

void kdbg_core_exit(void)
{
#ifndef MODULE
	print("kdbg_kprobe_exit\n");
	kdbg_kprobe_exit();
#endif
}