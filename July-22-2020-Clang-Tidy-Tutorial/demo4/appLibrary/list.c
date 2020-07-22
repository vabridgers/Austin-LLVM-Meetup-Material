
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

#include "acme.h"
#include "list.h"

void *alloc_list(size_t elements) {
    acme_list *l = (acme_list *)malloc( sizeof(acme_list) + elements * sizeof(int));
    if (l) {
        l->elements = elements;
    }
    return l;
}

void free_list(void *list) {
    free(list);
}
