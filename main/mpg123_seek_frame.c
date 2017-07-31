#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

off_t _Mpg123_mpg123_seek_frame(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       off_t frameoff,
       int whence)
{
  return mpg123_seek_frame(mh, frameoff, whence);
}

