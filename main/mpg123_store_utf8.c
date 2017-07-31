#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_store_utf8(struct Mpg123IFace *Self,
       mpg123_string * sb,
       enum mpg123_text_encoding enc,
       const unsigned char * source,
       size_t source_size)
{
  return mpg123_store_utf8(sb, enc, source, source_size);
}

