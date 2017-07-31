#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

double _Mpg123_mpg123_tpf(struct Mpg123IFace *Self,
       mpg123_handle * mh)
{
  return mpg123_tpf(mh);
}

