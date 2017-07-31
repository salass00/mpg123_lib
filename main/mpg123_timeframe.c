#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

off_t _Mpg123_mpg123_timeframe(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       double sec)
{
  return mpg123_timeframe(mh, sec);
}

