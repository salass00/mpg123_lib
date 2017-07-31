#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

void _Mpg123_mpg123_rates(struct Mpg123IFace *Self,
       const long ** list,
       size_t * number)
{
  mpg123_rates(list, number);
}

