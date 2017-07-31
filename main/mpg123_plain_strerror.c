#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

const char * _Mpg123_mpg123_plain_strerror(struct Mpg123IFace *Self,
       int errcode)
{
  return mpg123_plain_strerror(errcode);
}

