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
	printf("\n\nUsage:\n\t./2D-SP [option]\n\n");
	printf("OPTIONS:\n");
	printf("\t-h --help\tdisplays this message and exits\n\n");
	printf("\t--about\t\tabout 2D-SP\n\n");
	printf("\t-d --debug-mode <value>[2]:\n");
	printf("\t\t0\tdon't print anything. Don't event think of a log file.\n");
	printf("\t\t1\tjust show me most important error messages, and print a log with errors only.\n");
	printf("\t\t2\tprint errors, write a log with most informations. [default]\n");
	printf("\t\t3\tprint everything, don't miss any info. I want to know what happened when I crashed.\n");
	printf("\t\t4\tprint current values in-game.\n\n");
	printf("\t--log-file <file>\tchoose another file to write log into. Only applies if the file doesn't exist.\n\n");
	printf("\t--no-mod\tif mods are installed, don't use them. (useful to prevent a save from corruption.)\n\n");
	printf("\nAuthor: Jean-Marc ZIMMER jeanmarczimmer56@gmail.com\n\n");
	return (1);
}
