#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_meta_check(struct Mpg123IFace *Self,
       mpg123_handle * mh)
{
  return mpg123_meta_check(mh);
}

