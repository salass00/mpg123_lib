#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_getformat(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       long * rate,
       int * channels,
       int * encoding)
{
  return mpg123_getformat(mh, rate, channels, encoding);
}

