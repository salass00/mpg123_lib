#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_set_filesize(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       off_t size)
{
  return mpg123_set_filesize(mh, size);
}

