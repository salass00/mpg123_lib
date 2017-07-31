#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_getpar(struct Mpg123IFace *Self,
       mpg123_pars * mp,
       enum mpg123_parms type,
       long * val,
       double * fval)
{
  return mpg123_getpar(mp, type, val, fval);
}

