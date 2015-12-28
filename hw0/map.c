#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
int foo;            /* a staticly allocated variable */

int recur(int i) {      /* a recursive function */
    int j = i;            /* a stack allocated variable within a recursive function */
    printf("recur call %d: stack@ %lx\n", i, j); /* fix this so it prints the address of j */
    if (i > 0) {
        return recur(i-1);
    }
    return 0;
}

int stuff = 7;          /* a statically allocarted, pre-initialized variable */

int main (int argc, char *argv[]) {
    int i;            /* a stack allocated variable */
    char *buf1 = malloc(100); /* dynamically allocate some stuff */
    char *buf2 = malloc(100); /* and some more stuff */
    printf("_main  @ %lx\n", main); /* fix to print address of main */
    printf("recur @ %lx\n", recur); /* fix to print address of recur */
    printf("_main stack: %lx\n", i); /* fix to get address of the stack variable */
    printf("static data: %lx\n", stuff); /* fix to get address of a static variable */
    printf("Heap: malloc 1: %lx\n", (long unsigned int) buf1);
    printf("Heap: malloc 2: %lx\n", (long unsigned int) buf2);
=======
/* A staticly allocated variable */
int foo;

/* A recursive function */
int recur(int i) {
    /* A stack allocated variable within a recursive function */
    int j = i;

    /* TODO 1: Fix this so it prints the address of j */
    printf("recur call %d: stack@ %p\n", i, j);

    if (i > 0) {
        return recur(i - 1);
    }

    return 0;
}

/* A statically allocarted, pre-initialized variable */
int stuff = 7;

int main(int argc, char *argv[]) {
    /* A stack allocated variable */
    int i;

    /* Dynamically allocate some stuff */
    char *buf1 = malloc(100);
    /* ... and some more stuff */
    char *buf2 = malloc(100);

    printf("_main  @ %p\n", main);
    printf("recur @ %p\n", recur);

    /* TODO 2: Fix to get address of the stack variable */
    printf("_main stack: %p\n", i);

    /* TODO 3: Fix to get address of a static variable */
    printf("static data: %p\n", stuff);

    printf("Heap: malloc 1: %p\n", buf1);
    printf("Heap: malloc 2: %p\n", buf2);
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
    recur(3);
    return 0;
}
