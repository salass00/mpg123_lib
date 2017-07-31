#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

const char * _Mpg123_mpg123_current_decoder(struct Mpg123IFace *Self,
       mpg123_handle * mh)
{
  return mpg123_current_decoder(mh);
}

