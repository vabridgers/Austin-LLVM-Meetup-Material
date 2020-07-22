
#include "acme.h"

void *acme_zalloc(size_t s, int flags) {
    if (!s) return NULL;
    // NOLINTNEXTLINE(misc-change-malloc)
    void *p=malloc(s);
    if (p && flags) {
      memset(p, 0, s);
    }

    return p;
}

void acme_free(void * p) {
    // NOLINTNEXTLINE(misc-change-malloc)
    free(p);
}

