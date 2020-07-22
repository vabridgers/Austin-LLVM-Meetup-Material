
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#include "acme.h"
#include "buffer.h"
#include "list.h"

int main(void) {

   void *pb = malloc(4);
   // do something with buffer...
   free(pb);

   acme_list * pl = alloc_list(42);
   // do something with the list ...
   free_list(pl);

   acme_buffer *pbuf = alloc_buffer(52);
   // do something with the buffer ...
   free_buffer(pbuf);
   
   return 0;
}
