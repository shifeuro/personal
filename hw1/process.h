#ifndef _PROCESS_H_
#define _PROCESS_H_

<<<<<<< HEAD
=======
#include <stdbool.h>
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
#include <signal.h>
#include <sys/types.h>
#include <termios.h>
#include <unistd.h>

<<<<<<< HEAD
typedef struct process
{
  char** argv;
  int argc;
  pid_t pid;
  char completed;
  char stopped;
  char background;
  int status;
  struct termios tmodes;
  int stdin, stdout, stderr;
  struct process* next;
  struct process* prev;
} process;

process* first_process; //pointer to the first process that is launched */

void launch_process(process* p);
void put_process_in_background (process* p, int cont);
void put_process_in_foreground (process* p, int cont);
=======
/**
 * Executes the program pointed by process name
 */
void launch_process(char *process_name);

/**
 * Puts a process group with id PID into the foreground. Restores terminal
 * settings from *tmodes. Waits until the process with id PID exits or pauses.
 * Then, saves the current terminal settings into *tmodes. Finally, puts the
 * shell back into the foreground and restores terminal settings from
 * shell_tmodes.
 *
 *     pid
 *     cont   -- Send a SIGCONT to the process group to make it resume if it was
 *               paused.
 *     tmodes -- A pointer to some memory to save terminal settings for this
 *               process. If this process is a new process, you should copy
 *               settings from shell_tmodes to start out with.
 *               Can be NULL to ignore terminal settings.
 *
 */
void put_process_in_foreground(pid_t pid, bool cont, struct termios *tmodes);

/**
 * Put a job in the background.
 *
 *     pid
 *     cont -- Send the process group a SIGCONT signal to wake it up.
 *
 */
void put_process_in_background(pid_t pid, bool cont);
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05

#endif
