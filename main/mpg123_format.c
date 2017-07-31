#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_format(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       long rate,
       int channels,
       int encodings)
{
  return mpg123_format(mh, rate, channels, encodings);
}

