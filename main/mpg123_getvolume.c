#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_getvolume(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       double * base,
       double * really,
       double * rva_db)
{
  return mpg123_getvolume(mh, base, really, rva_db);
}

