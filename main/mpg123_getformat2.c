#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_getformat2(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       long * rate,
       int * channels,
       int * encoding,
       int clear_flag)
{
  return mpg123_getformat2(mh, rate, channels, encoding, clear_flag);
}

