#ifndef __P_SCHED_CONF_H
#define __P_SCHED_CONF_H

enum sched_config_type {
	TEMP,
	CLOCK
};

typedef sc_type int;

typedef struct {
	char *cnam;
	sc_type sctyp;
} sched_conf;

typedef struct {
	sched_conf sconf;
	double act;
	double dea;
} sched_conf_temp;

typedef struct {
	sched_conf sconf;
} sched_conf_clock;

#define SCHED_CONF_ISTEMP(x)()
#define SCHED_CONF_ISCLOCK(x)()

int sched_conf_read(sched_conf * * const, char const * const);

#endif
