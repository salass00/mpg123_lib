#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

double _Mpg123_mpg123_geteq(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       enum mpg123_channels channel,
       int band)
{
  return mpg123_geteq(mh, channel, band);
}

