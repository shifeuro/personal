#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "parse.h"

<<<<<<< HEAD
/*          Get tokens from a line of characters */
/* Return:  new array of pointers to tokens */
/* Effects: token separators in line are replaced with NULL */
/* Storage: Resulting token array points into original line */

#define TOKseparator " \n:"

tok_t *getToks(char *line) {
  int i;
  char *c;

  tok_t *toks = malloc(MAXTOKS*sizeof(tok_t));
  for (i=0; i<MAXTOKS; i++) toks[i] = NULL;     /* empty token array */
  

  c = strtok(line,TOKseparator);	 /* Start tokenizer on line */
  for (i=0; c && (i < MAXTOKS); i++) {
    toks[i] = c;
    c = strtok(NULL,TOKseparator);	/* scan for next token */
=======
#define TOKseparator " \n:"

/**
 * Tokenizes the line of characters.
 * Returns a new array of pointers to token locations within the line.
 * Please note that token separators in the line are replaced with NULL,
 * so the line is therefore mutated.
 */
tok_t *get_toks(char *line) {
  int i;
  char *c;

  tok_t *toks = malloc(MAXTOKS * sizeof(tok_t));

  /** Intializes an empty token array */
  for (i = 0; i < MAXTOKS; i++) toks[i] = NULL;

  /* Start tokenizer on line */
  c = strtok(line, TOKseparator);
  for (i = 0; c && i < MAXTOKS; i++) {
    toks[i] = c;
    /* scan for next token */
    c = strtok(NULL, TOKseparator);
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
  }
  return toks;
}

<<<<<<< HEAD
void freeToks(tok_t *toks) {
  free(toks);
}

void fprintTok(FILE *ofile, tok_t *t) {
  int i;
  for (i=0; i<MAXTOKS && t[i]; i++) {
    fprintf(ofile,"%s ", t[i]);
  }
  fprintf(ofile,"\n");
}

/* Locate special processing character */
int isDirectTok(tok_t *t, char *R) {
  int i;
  for (i=0; i<MAXTOKS-1 && t[i]; i++) {
    if (strncmp(t[i],R,1) == 0) return i;
=======
/**
 * Frees the memory of the token array toks.
 * Please call if and only if toks will not be used in the future.
 */
void free_toks(tok_t *toks) {
  free(toks);
}

/**
 * Prints the token stream t to the output file ofile.
 */
void fprint_tok(FILE *ofile, tok_t *t) {
  for (int i = 0; i < MAXTOKS && t[i]; i++) {
    fprintf(ofile, "%s ", t[i]);
  }
  fprintf(ofile, "\n");
}

/**
 * Locates the character R in the token array t.
 * Please note that R must be of length 1.
 * Returns the token that is an exact match of R.
 */
int is_direct_tok(tok_t *t, char *R) {
  for (int i = 0; i < MAXTOKS - 1 && t[i]; i++) {
    if (strncmp(t[i], R, 1) == 0)
      return i;
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
  }
  return 0;
}
