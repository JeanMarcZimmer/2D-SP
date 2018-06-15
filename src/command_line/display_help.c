/*
** PROJECT:
** C_Open Space Program
**
** OWNER:
** Jean-Marc Zimmer
** jeanmarczimmer56@gmail.com
**
** FILE: display_cl_usage_help.c
*/

#include <stdio.h>
#include "command_line_initiation.h"

int display_cl_usage_help(void)
{
	printf("0-------------------------------------------------0\n");
	printf("|   #####    #######           #####    #######   |\n");
	printf("| ##     ##  ##     ##       ##     ##  ##     ## |\n");
	printf("|       ###  ##     ##        ###       ##     ## |\n");
	printf("|     ###    ##     ## #####    ###     #######   |\n");
	printf("|   ###      ##     ##            ###   ##        |\n");
	printf("| ###        ##     ##       ##     ##  ##        |\n");
	printf("| #########  #######           #####    ##        |\n");
	printf("|                                                 |\n");
	printf("| The  C  Open-source  2D  Space Exploration Game |\n");
	printf("0-------------------------------------------------0\n");
	printf("\n\nUsage:\n\t./2D-SP [option]\n\nOPTIONS:\n\t-h --help\tdisplays this message and exits\n\t--about\t\tabout C_OSP\n\nAuthor: Jean-Marc ZIMMER jeanmarczimmer56@gmail.com\n\n");
	return (1);
}
