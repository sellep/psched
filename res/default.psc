#default p sched configuration file

sched_entry "Ventilation" {

	#define type of configuration [temp / clock]
	config_type=temp

	#specify related electrical socket
	socket=0

	#activation temperature
	activation=28.0

	#deactivation temperature
	deactivation=27.0
}

sched_entry "Lighting" {
	config_type=clock
	socket=1
	start=05:15
	end=23:15
}

sched_entry "Watering" {
	config_type=clock
	socket=2
	start=06:00:00
	end=06:00:30
	skip_days=1	
}

log {
	path=/var/log/psched
}

hygrometer {

}
