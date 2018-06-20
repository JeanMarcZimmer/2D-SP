/*
** PROJECT:
** C_Open Space Program
**
** OWNER:
** Jean-Marc Zimmer
** jeanmarczimmer56@gmail.com
**
** FILE: system/log.h
*/

#ifndef LOG_H_
#define LOG_H_

extern FILE *log_fc;

void log_message(char const *);
int open_log(char *);
void close_log(void);

#endif /* LOG_H_ */
