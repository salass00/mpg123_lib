#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_volume(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       double vol)
{
  return mpg123_volume(mh, vol);
}

