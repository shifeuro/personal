<<<<<<< HEAD
CC = gcc
FUSE_DIR = lib/fuse
CFLAGS = -std=gnu99 -g -Wall -I $(FUSE_DIR)/include -D_FILE_OFFSET_BITS=64
TFLAGS = -DTESTS

LINKFLAGS = -L$(FUSE_DIR)/lib/.libs -lfuse

SRCS = $(wildcard *.c)

OBJS = kvfs.o

MAINOBJ = kvmount.o

TESTSRCS = $(wildcard tests/*.c)
TESTOBJS = $(TESTSRCS:.c=.o)

TESTEXE = kvfs_tests

all: fuse-stamp $(OBJS) $(MAINOBJ)
	$(CC) $(OBJS) $(MAINOBJ) $(LINKFLAGS) -o kvfs

# We create a file fuse-stamp to remember when/if lib/fuse was built.
fuse-stamp:
	cd $(FUSE_DIR); ./configure --prefix=`pwd`
	make -C ./lib/fuse
	touch fuse-stamp

test: $(OBJS) $(TESTOBJS)
	$(CC) -o $(TESTEXE) $^ $(LINKFLAGS)

check: test
	./$(TESTEXE)

clean:
	rm -rf *.o fs
	rm -rf tests/*.o
	rm -f kvfs
	rm -f kvfs_tests
	rm -f fuse-stamp

really-clean: clean
	$(MAKE) -C $(FUSE_DIR) clean

reset_fs:
	fusermount -u test_sandbox
	rm -rf .superblock

.PHONY: all clean check fuse fuse_conf
=======
#
# WARNING
#
# You should NOT edit this file, to change compiler flags, defines, etc.
# The hw3 autograder will replace this Makefile with a fresh copy.
#
SRCS=mm_alloc.c mm_test.c
EXECUTABLES=mm_test

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
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
