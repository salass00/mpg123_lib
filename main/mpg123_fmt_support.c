#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_fmt_support(struct Mpg123IFace *Self,
       mpg123_pars * mp,
       long rate,
       int encoding)
{
  return mpg123_fmt_support(mp, rate, encoding);
}

