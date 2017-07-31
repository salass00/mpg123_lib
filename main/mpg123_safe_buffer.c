#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

size_t _Mpg123_mpg123_safe_buffer(struct Mpg123IFace *Self)
{
  return mpg123_safe_buffer();
}

