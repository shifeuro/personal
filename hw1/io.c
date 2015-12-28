#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "io.h"

<<<<<<< HEAD
/* Read a line from input file and return as a string object */

#define MAXLINE 1024

char *freadln(FILE *ifile) {
  char line[MAXLINE];		/* allocate line buffer on the stack */
  char *r = NULL;		/* ptr to return string object */
  int len;
  char *s = fgets((char *)line, MAXLINE, ifile);
  if (!s) return s;
  len = strlen(s)+1;
  r = malloc(len);
  strncpy(r,s,len);
  return r;
}

=======
/**
 * Reads a line from the input file and returns a string object.
 */
char *freadln(FILE *ifile) {
  char line[MAXLINE];
  char *r = NULL;
  int len;
  char *s = fgets((char *)line, MAXLINE, ifile);
  if (!s)
    return s;
  len = strlen(s) + 1;
  r = malloc(len);
  strncpy(r, s, len);
  return r;
}

/**
 * Frees the memory allocated to a character array.
 */
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
void freeln(char *ln) {
  free(ln);
}
