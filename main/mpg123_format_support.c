#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_format_support(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       long rate,
       int encoding)
{
  return mpg123_format_support(mh, rate, encoding);
}

