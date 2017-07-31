#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_read(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       unsigned char * outmemory,
       size_t outmemsize,
       size_t * done)
{
  return mpg123_read(mh, outmemory, outmemsize, done);
}

