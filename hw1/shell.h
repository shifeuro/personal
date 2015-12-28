#ifndef _SHELL_H_
#define _SHELL_H_

#include <termios.h>
<<<<<<< HEAD
#include "sys/types.h"

int shell_terminal; //File descripter for the terminal.
int shell_is_interactive; //1 if shell_terminal is a valid terminal. 0 otherwise
struct termios shell_tmodes; //terminal options for the shell
id_t shell_pgid; //The shell's process id
=======
#include <stdbool.h>
#include <sys/types.h>

/* Whether the shell is connected to an actual terminal or not. */
extern bool shell_is_interactive;

/* File descriptor for the shell input */
extern int shell_terminal;

/* Terminal mode settings for the shell */
extern struct termios shell_tmodes;

/* Process group id for the shell */
extern pid_t shell_pgid;

>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
int shell(int argc, char *argv[]);

#endif
