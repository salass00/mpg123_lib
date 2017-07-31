#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_copy_string(struct Mpg123IFace *Self,
       mpg123_string * sb,
       mpg123_string * to)
{
  return mpg123_copy_string(sb, to);
}

