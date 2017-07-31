#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

void _Mpg123_mpg123_delete(struct Mpg123IFace *Self,
       mpg123_handle * mh)
{
  mpg123_delete(mh);
}

