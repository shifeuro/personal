<<<<<<< HEAD
/* "Copyright (c) 2014 The Regents of the University of California.  
=======
/* "Copyright (c) 2014 The Regents of the University of California.
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement
 * is hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
<<<<<<< HEAD
 * 
=======
 *
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY
 * OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
<<<<<<< HEAD
 * 
=======
 *
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 */

/*
 * @author David E. Culler
 *
<<<<<<< HEAD
 * Simple tokenizer 
=======
 * Simple tokenizer
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
 */

#ifndef _parse_H_
#define _parse_H_

#define MAXTOKS 100

typedef char *tok_t;

<<<<<<< HEAD
tok_t *getToks(char *line);
void freeToks(tok_t *toks);
=======
tok_t *get_toks(char *line);
void free_toks(tok_t *toks);
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05

#endif
