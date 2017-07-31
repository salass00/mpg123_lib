#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_replace_buffer(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       unsigned char * data,
       size_t size)
{
  return mpg123_replace_buffer(mh, data, size);
}

