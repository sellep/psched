#ifndef __P_SCHED_H
#define __P_SCHED_H

#define BOOL int
#define TRUE 1
#define FALSE 0

enum sched_errs
{
	SCHED_OK = 1,
	SCHED_CONF_ERR = -1
};

typedef int sched_err;

#define SCHED_ERR_OK(s)(s == SCHED_OK)

char* sched_err_str(sched_err const);

sched_err sched_sys_check();

#endif
