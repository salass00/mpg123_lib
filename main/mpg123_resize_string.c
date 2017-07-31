#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_resize_string(struct Mpg123IFace *Self,
       mpg123_string * sb,
       size_t news)
{
  return mpg123_resize_string(sb, news);
}

