#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

void _Mpg123_mpg123_free_string(struct Mpg123IFace *Self,
       mpg123_string * sb)
{
  mpg123_free_string(sb);
}

