/*
** PROJECT:
** C_Open Space Program
**
** OWNER:
** Jean-Marc Zimmer
** jeanmarczimmer56@gmail.com
**
** FILE: game_globals.h
*/

#ifndef GAME_GLOBALS_H_
#define GAME_GLOBALS_H_

#include <stdbool.h>
#include <stdio.h>

typedef struct assigned_keys_s {
	sfKeyCode pitch_up;
	sfKeyCode pitch_down;
	sfKeyCode max_throttle;
	sfKeyCode cut_throttle;
	sfKeyCode throttle_up;
	sfKeyCode throttle_down;
	sfKeyCode lights;
	sfKeyCode landing_gears;
	sfKeyCode abort;
	sfKeyCode warp_up;
	sfKeyCode warp_down;
} assigned_keys_t;

typedef struct volume_s {
	int main_volume;
	int music_volume;
	int sfx_volume;
} volume_t;

extern int autosave_rate;
extern int debug_lvl;
extern FILE *log_file;
extern bool no_mod;
extern struct assigned_keys_s assigned_keys;
extern struct volume_s volume;

#endif /* GAME_GLOBALS_H_ */
