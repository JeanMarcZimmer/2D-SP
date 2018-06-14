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

int main(int ac, char **av)
{
	int start;
	if ((start = get_command_line_parameters(ac, av)) == 84)
		return (84);
	if (start == 1)
		return (0);
	printf("Done.\n");
	return (0);
}
