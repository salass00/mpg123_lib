#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

void _Mpg123_mpg123_delete_pars(struct Mpg123IFace *Self,
       mpg123_pars * mp)
{
  mpg123_delete_pars(mp);
}

