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

int display_cl_about(void)
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
	printf("\n\n2D Space Program is a space exploration game inspired by Kerbal Space Program (made by Squad)\n\nLICENCE:\n\tThis is an open-source program. Read LICENCE for more information.\n\nAuthor: Jean-Marc ZIMMER jeanmarczimmer56@gmail.com\n\n");
	return (1);
}
