#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

const char ** _Mpg123_mpg123_decoders(struct Mpg123IFace *Self)
{
  return mpg123_decoders();
}

