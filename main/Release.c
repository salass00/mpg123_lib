#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

uint32 _Mpg123_Release(struct Mpg123IFace *Self) {
	return --Self->Data.RefCount;
}

