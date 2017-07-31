#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_add_substring(struct Mpg123IFace *Self,
       mpg123_string * sb,
       const char * stuff,
       size_t from,
       size_t count)
{
  return mpg123_add_substring(sb, stuff, from, count);
}

