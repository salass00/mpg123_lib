#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_open_fd(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       int fd)
{
  return mpg123_open_fd(mh, fd);
}

