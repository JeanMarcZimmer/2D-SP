/*
** PROJECT:
** C_Open Space Program
**
** OWNER:
** Jean-Marc Zimmer
** jeanmarczimmer56@gmail.com
**
** FILE: main.c
*/

#include <stdio.h>
#include "command_line_initiation.h"
#include "main.h"

static int init_program(char *log_file)
{
	if (log_file) {
		if (open_log(log_file) == 1) {
			if (open_log(NULL) == 1) {
				return (84);
			}
		}
	} else
		if (open_log(NULL) == 1)
			return (84);
	return (0);			
}

int main(int ac, char **av)
{
	char *log_file = NULL;
	int start;
	if ((start = get_command_line_parameters(ac, av, &log_file)) == 84)
		return (84);
	if (start == 1)
		return (0);
	if (init_program(log_file) == 84)
		return (84);
	close_log();
	return (0);
}
