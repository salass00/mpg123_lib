#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_open(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       const char * path)
{
  return mpg123_open(mh, path);
}

