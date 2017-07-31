#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_decoder(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       const char * decoder_name)
{
  return mpg123_decoder(mh, decoder_name);
}

