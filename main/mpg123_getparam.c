#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_getparam(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       enum mpg123_parms type,
       long * val,
       double * fval)
{
  return mpg123_getparam(mh, type, val, fval);
}

