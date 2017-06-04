#include "sched_conf.h"

sched_err sched_conf_run(sched_conf const * const cfg)
{
	sched_conf_entry *entry;
	sched_err status;
	ssize_t i;

	while (1)
	{
		//check for kill signal
		
		//pol hygtro
			//-> kernel module		

		//get system date

		//write into hygro_table

		for (i = 0; i < cfg->entrs_len; i++)
		{
			entry = &cfg_entrs[i];

			if (SCHED_CONF_ENTRY_ISTEMP(entry))
			{
				if ((status = sched_conf_run_temp((*sched_conf_entry_temp)) != SCHED_OK)
					return status;
			}
			else if (SCHED_CONF_ENTRY_ISCLOCK(entry))
			{
				if ((status = sched_conf_run_clock((*sched_conf_entry_clock)) != SCHED_OK)
					return status;
			}
			else
			{
				sched_log_errnl("");
				return SCHED_CONF_ERR; 
			}
		}	
	}
}
