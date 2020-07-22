#include <stdlib.h>
#include <memory.h>

// Sample implementation our manager gave us.
void *acme_zmalloc(size_t s) {
  void *ptr = malloc(s);
  memset(ptr, 0, s);
  return ptr;
}

void * foo(int s) {
  return malloc(s); 
}

