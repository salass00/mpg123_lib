#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

off_t _Mpg123_mpg123_feedseek(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       off_t sampleoff,
       int whence,
       off_t * input_offset)
{
  return mpg123_feedseek(mh, sampleoff, whence, input_offset);
}

