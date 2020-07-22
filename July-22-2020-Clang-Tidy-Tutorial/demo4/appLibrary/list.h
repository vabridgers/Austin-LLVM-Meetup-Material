#ifndef __LIST_H__
#define __LIST_H__

typedef struct __acme_list {
    size_t elements;
    int array[];
} acme_list;

void *alloc_list(size_t);
void free_list(void *);

#endif // __LIST_H__

