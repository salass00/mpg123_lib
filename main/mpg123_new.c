#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

mpg123_handle * _Mpg123_mpg123_new(struct Mpg123IFace *Self,
       const char * decoder,
       int * error)
{
  return mpg123_new(decoder, error);
}

