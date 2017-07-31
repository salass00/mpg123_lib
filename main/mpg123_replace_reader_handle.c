#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_replace_reader_handle(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       mpg123_read_handle_callback r_read,
       mpg123_lseek_handle_callback r_lseek,
       mpg123_cleanup_callback cleanup)
{
  return mpg123_replace_reader_handle(mh, r_read, r_lseek, cleanup);
}

