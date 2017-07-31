#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_par(struct Mpg123IFace *Self,
       mpg123_pars * mp,
       enum mpg123_parms type,
       long value,
       double fvalue)
{
  return mpg123_par(mp, type, value, fvalue);
}

