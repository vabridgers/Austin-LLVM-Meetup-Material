#pragma clang diagnostic ignored "-Wdivision-by-zero"

#include <stdlib.h>
#include <memory.h>

int foo(void) {
    void *ptr = malloc(4);

    free(ptr);
    return 0;
}

int fee(int i) {
    return i*2;
}

int gee(int i) {
    return i/2;
}

int anError(int i) {
    return i/0;
}
