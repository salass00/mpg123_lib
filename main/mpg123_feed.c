#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_feed(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       const unsigned char * in,
       size_t size)
{
  return mpg123_feed(mh, in, size);
}

