#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_decode_frame(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       off_t * num,
       unsigned char ** audio,
       size_t * bytes)
{
  return mpg123_decode_frame(mh, num, audio, bytes);
}

