/*
 * AmigaOS shared library implementation of libmpg123.
 *
 * Copyright (C) 2011-2017 Fredrik Wikstrom <fredrik@a500.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include "../mpg123_vectors.h"
#include <interfaces/mpg123.h>

int _Mpg123_mpg123_id3(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       mpg123_id3v1 ** v1,
       mpg123_id3v2 ** v2)
{
  return mpg123_id3(mh, v1, v2);
}

