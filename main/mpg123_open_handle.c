#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_open_handle(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       APTR iohandle)
{
  return mpg123_open_handle(mh, iohandle);
}

