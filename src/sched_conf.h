#ifndef __P_SCHED_CONF_H
#define __P_SCHED_CONF_H

#include "sched.h"

enum sched_conf_entry_types
{
	TEMP,
	CLOCK
};

typedef int sched_conf_entry_type;

typedef struct
{
	char *cnam;
	entry_type etyp;
	char *dep_on;
} sched_conf_entry;

typedef struct
{
	sched_conf_entry base;
	double act;
	double dea;
} sched_conf_entry_temp;

typedef struct
{
	sched_conf_entry base;
} sched_conf_entry_clock;

typedef struct
{
	ssize_t pol;
} sched_hconf_ygr;

typedef struct
{
	sched_conf_entry *entrs;
	ssize_t entrs_len;
	sched_conf_hygr hygr;
} sched_conf;

#define SCHED_CONF_ENTRY_ISTEMP(x)()
#define SCHED_CONF_ENTRY_ISCLOCK(x)()

sched_err sched_conf_read(sched_conf * const, char const * const);

#endif
