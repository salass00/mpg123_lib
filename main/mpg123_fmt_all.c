#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_fmt_all(struct Mpg123IFace *Self,
       mpg123_pars * mp)
{
  return mpg123_fmt_all(mp);
}

