#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_framedata(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       unsigned long * header,
       unsigned char ** bodydata,
       size_t * bodybytes)
{
  return mpg123_framedata(mh, header, bodydata, bodybytes);
}

