#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_getstate(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       enum mpg123_state key,
       long * val,
       double * fval)
{
  return mpg123_getstate(mh, key, val, fval);
}

