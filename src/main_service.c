
#include "sched.h"
#include "sched_conf.h"
#include "sched_log.h"

extern void sched_log_infonl_args(int const, char const * const * const argv);

int main(int const argc, char const * const * const argv)
{
	sched_conf cfg;
	sched_err status;

	sched_log_infonl_args(argc, argv);

	if (argc != 2)
	{
		sched_log_errnl("unexpected argument count");
		exit(1);
	}

	if (!sched_conf_read(&cfg, argv[1]))
	{
		sched_log_errnl("unable to parse config file %s", argv[1]);
		exit(1);
	}

	status = sched_conf_run(&cfg);	
	if (SCHED_ERR_OK(status))
		return 0;

	return status;
}
