#ifndef __P_SCHED_CONF_H
#define __P_SCHED_CONF_H

enum sched_entry_type {
	TEMP,
	CLOCK
};

typedef struct {
	char *cnam;
	entry_type etyp;
} sched_entry;

typedef struct {
	sched_entry bas;
	double act;
	double dea;
} sched_entry_temp;

typedef struct {
	sched_entry bas;
} sched_entry_clock;

#define SCHED_ENTRY_ISTEMP(x)()
#define SCHED_ENTRY_ISCLOCK(x)()

int sched_entry_read(sched_entry * * const, char const * const);

#endif
