#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_replace_reader(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       mpg123_read_callback r_read,
       mpg123_lseek_callback r_lseek)
{
  return mpg123_replace_reader(mh, r_read, r_lseek);
}

