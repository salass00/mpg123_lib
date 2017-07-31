#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

mpg123_pars * _Mpg123_mpg123_new_pars(struct Mpg123IFace *Self,
       int * error)
{
  return mpg123_new_pars(error);
}

