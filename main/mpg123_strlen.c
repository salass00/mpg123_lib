#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

size_t _Mpg123_mpg123_strlen(struct Mpg123IFace *Self,
       mpg123_string * sb,
       int utf8)
{
  return mpg123_strlen(sb, utf8);
}

