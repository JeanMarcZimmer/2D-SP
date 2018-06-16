/*
** PROJECT:
** C_Open Space Program
**
** OWNER:
** Jean-Marc Zimmer
** jeanmarczimmer56@gmail.com
**
** FILE: get_command_line_parameters.c
*/

#include <getopt.h>
#include <stdlib.h>
#include <stdio.h>
#include "command_line_initiation.h"

static int manage_option(char c, char *optarg)
{
	switch (c) {
	case 'h':
		return (display_cl_usage_help());
	case 'A':
		return (display_cl_about());
	case 'd':
		return (0);
	default:
		fprintf(stderr, "Syntax error. Try running ./C_OSP --help\n");
		return (84);
	}
	fprintf(stderr, "How did this message even show up ?\n");
	return (84);
}

int get_command_line_parameters(int ac, char **av)
{
	static struct option long_options[] = {
		{"help", no_argument, 0, 'h'},
		{"about", no_argument, 0, 'A'},
		{"debug-mode", required_argument, 0, 'd'},
		{"log-file", required_argument, 0, 'L'},
		{"no_mod", no_argument, 0, 'N'},
		{0, 0, 0, 0}
	};
	int c;
	int option_index = 0;
	int status = 0;

	while ((c = getopt_long(ac, av, "hd:", long_options, &option_index)) != -1) {
		switch (manage_option(c, optarg)) {
		case (84):
			return (84);
		case (1):
			status = 1;
		}
	}
	return (status);
}
