#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_set_string(struct Mpg123IFace *Self,
       mpg123_string * sb,
       const char * stuff)
{
  return mpg123_set_string(sb, stuff);
}

