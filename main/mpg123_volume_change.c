#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_volume_change(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       double change)
{
  return mpg123_volume_change(mh, change);
}

