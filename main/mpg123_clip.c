#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

long _Mpg123_mpg123_clip(struct Mpg123IFace *Self,
       mpg123_handle * mh)
{
  return mpg123_clip(mh);
}

