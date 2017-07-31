#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

size_t _Mpg123_mpg123_outblock(struct Mpg123IFace *Self,
       mpg123_handle * mh)
{
  return mpg123_outblock(mh);
}

