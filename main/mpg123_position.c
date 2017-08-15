#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_position(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       off_t frame_offset,
       off_t buffered_bytes,
       off_t * current_frame,
       off_t * frames_left,
       double * current_seconds,
       double * seconds_left)
{
  return mpg123_position(mh, frame_offset, buffered_bytes, current_frame, frames_left, current_seconds, seconds_left);
}

