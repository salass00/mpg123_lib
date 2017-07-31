#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

char * _Mpg123_mpg123_icy2utf8(struct Mpg123IFace *Self,
       const char * icy_text)
{
  return mpg123_icy2utf8(icy_text);
}

