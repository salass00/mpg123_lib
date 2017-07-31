#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_icy(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       char ** icy_meta)
{
  return mpg123_icy(mh, icy_meta);
}

