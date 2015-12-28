<<<<<<< HEAD
SRCS=mm_alloc.c mm_test.c
EXECUTABLES=malloc_test

CC=gcc
CFLAGS=-g -Wall
LDFLAGS=

OBJS=$(SRCS:.c=.o)

all: $(EXECUTABLES)

$(EXECUTABLES): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@  

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(EXECUTABLES) $(OBJS)
=======
CC=gcc
CFLAGS=-ggdb3 -c -Wall
LDFLAGS=-pthread
SOURCES=httpserver.c libhttp.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=httpserver

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
