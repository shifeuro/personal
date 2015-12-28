<<<<<<< HEAD
SRCS=main.c shell.c process.c io.c parse.c 
EXECUTABLES=shell 

CC=gcc
CFLAGS=-g -Wall 
=======
SRCS=main.c shell.c process.c io.c parse.c
EXECUTABLES=shell

CC=gcc
CFLAGS=-g -Wall -std=gnu99
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
LDFLAGS=

OBJS=$(SRCS:.c=.o)

all: $(EXECUTABLES)

$(EXECUTABLES): $(OBJS)
<<<<<<< HEAD
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@  
=======
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(EXECUTABLES) $(OBJS)
