#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

off_t _Mpg123_mpg123_framelength(struct Mpg123IFace *Self,
       mpg123_handle * mh)
{
  return mpg123_framelength(mh);
}

