
#ifndef __BUFFER_H__
#define __BUFFER_H__

typedef void *acme_buffer;

acme_buffer *alloc_buffer(size_t s);
void free_buffer(acme_buffer *b);

#endif // __BUFFER_H__
