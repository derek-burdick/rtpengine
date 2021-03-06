#ifndef _AUXLIB_H_
#define _AUXLIB_H_

#include <glib.h>

struct rtpengine_common_config {
	char *config_file;
	char *config_section;
	char *log_facility;
	volatile int log_level;
	int log_stderr;
	char *pidfile;
	int foreground;
};

extern struct rtpengine_common_config *rtpe_common_config_ptr;

void daemonize(void);
void wpidfile(void);
void config_load(int *argc, char ***argv, GOptionEntry *entries, const char *description,
		char *default_config, char *default_section,
		struct rtpengine_common_config *);


#endif
