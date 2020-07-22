#ifndef __ACME_ZALLOC_H__
#define __ACME_ZALLOC_H__
#include <stdlib.h>
#include <string.h>
#define ZERO_INITIALIZE 1
void *acme_zalloc(size_t s, int flags);
void acme_free(void * p);

#endif // __ACME_ZALLOC_H__
