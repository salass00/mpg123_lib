#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_decode(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       const unsigned char * inmemory,
       size_t inmemsize,
       unsigned char * outmemory,
       size_t outmemsize,
       size_t * done)
{
  return mpg123_decode(mh, inmemory, inmemsize, outmemory, outmemsize, done);
}

