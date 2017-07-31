#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

enum mpg123_text_encoding _Mpg123_mpg123_enc_from_id3(struct Mpg123IFace *Self,
       unsigned char id3_enc_byte)
{
  return mpg123_enc_from_id3(id3_enc_byte);
}

