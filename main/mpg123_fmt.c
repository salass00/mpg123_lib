#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_fmt(struct Mpg123IFace *Self,
       mpg123_pars * mp,
       long rate,
       int channels,
       int encodings)
{
  return mpg123_fmt(mp, rate, channels, encodings);
}

