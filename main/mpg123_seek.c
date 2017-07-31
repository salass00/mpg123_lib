#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

off_t _Mpg123_mpg123_seek(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       off_t sampleoff,
       int whence)
{
  return mpg123_seek(mh, sampleoff, whence);
}

