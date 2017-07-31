#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

mpg123_handle * _Mpg123_mpg123_parnew(struct Mpg123IFace *Self,
       mpg123_pars * mp,
       const char * decoder,
       int * error)
{
  return mpg123_parnew(mp, decoder, error);
}

