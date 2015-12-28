#include <stdio.h>
<<<<<<< HEAD
#include <sys/time.h>
=======
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
#include <sys/resource.h>

int main() {
    struct rlimit lim;
<<<<<<< HEAD
    printf("stack size: %d\n",  0);
    printf("process limit: %d\n", 0);
    printf("max file descriptors: %d\n", 0);
=======
    printf("stack size: %ld\n", 0L);
    printf("process limit: %ld\n", 0L);
    printf("max file descriptors: %ld\n", 0L);
    return 0;
>>>>>>> 68371345f2629ca6697c19e5e44d8bfcfb5faa05
}
