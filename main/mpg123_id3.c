#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_id3(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       mpg123_id3v1 ** v1,
       mpg123_id3v2 ** v2)
{
  return mpg123_id3(mh, v1, v2);
}

