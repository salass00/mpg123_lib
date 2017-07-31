#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

void _Mpg123_mpg123_encodings(struct Mpg123IFace *Self,
       const int ** list,
       size_t * number)
{
  mpg123_encodings(list, number);
}

