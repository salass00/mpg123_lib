#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_index(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       off_t ** offsets,
       off_t * step,
       size_t * fill)
{
  return mpg123_index(mh, offsets, step, fill);
}

