#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_info(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       struct mpg123_frameinfo * mi)
{
  return mpg123_info(mh, mi);
}

