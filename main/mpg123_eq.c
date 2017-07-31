#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_eq(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       enum mpg123_channels channel,
       int band,
       double val)
{
  return mpg123_eq(mh, channel, band, val);
}

