/*
** PROJECT:
** C_Open Space Program
**
** OWNER:
** Jean-Marc Zimmer
** jeanmarczimmer56@gmail.com
**
** FILE: log.c
*/

#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include "system/log.h"

FILE *log_fc = 0;

int open_log(char *filename)
{
	if (!filename) {
		time_t t = time(NULL);
		struct tm tm = *localtime(&t);
		asprintf(&filename, "logs/2DSP_%d_%d_%d__%d_%d_%d.log", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	}
	if (!access(filename, F_OK)) {
		fprintf(stdout, "ERROR: could not create log file %s : file exists.\n", filename);
		return (1);
	}
	log_fc = fopen(filename, "w");
	fprintf(log_fc, "\t0-------------------------------------------------0\n");
	fprintf(log_fc, "\t|   #####    #######           #####    #######   |\n");
	fprintf(log_fc, "\t| ##     ##  ##     ##       ##     ##  ##     ## |\n");
	fprintf(log_fc, "\t|       ###  ##     ##        ###       ##     ## |\n");
	fprintf(log_fc, "\t|     ###    ##     ## #####    ###     #######   |\n");
	fprintf(log_fc, "\t|   ###      ##     ##            ###   ##        |\n");
	fprintf(log_fc, "\t| ###        ##     ##       ##     ##  ##        |\n");
	fprintf(log_fc, "\t| #########  #######           #####    ##        |\n");
	fprintf(log_fc, "\t|                                                 |\n");
	fprintf(log_fc, "\t| The  C  Open-source  2D  Space Exploration Game |\n");
	fprintf(log_fc, "\t0-------------------------------------------------0\n");
	log_message("Created log file");
	return (0);
}

void close_log(void)
{
	log_message("Finished log file");
	fclose(log_fc);
}

void log_message(char const *message)
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	fprintf(log_fc, "[%d/%d/%d_%d:%d:%d]:\t", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	fprintf(log_fc, "%s\n", message);
}
