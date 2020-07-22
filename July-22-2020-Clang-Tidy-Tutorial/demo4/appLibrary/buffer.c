
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#include "acme.h"
#include "buffer.h"

acme_buffer *alloc_buffer(size_t s) {
    return malloc(s);
}

void free_buffer(acme_buffer *b) {
    free(b);
}
