#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_feature(struct Mpg123IFace *Self,
       enum mpg123_feature_set key)
{
  return mpg123_feature(key);
}

