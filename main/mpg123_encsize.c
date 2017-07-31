#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_encsize(struct Mpg123IFace *Self,
       int encoding)
{
  return mpg123_encsize(encoding);
}

