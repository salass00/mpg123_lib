#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_param(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       enum mpg123_parms type,
       long value,
       double fvalue)
{
  return mpg123_param(mh, type, value, fvalue);
}

