#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_chomp_string(struct Mpg123IFace *Self,
       mpg123_string * sb)
{
  return mpg123_chomp_string(sb);
}

