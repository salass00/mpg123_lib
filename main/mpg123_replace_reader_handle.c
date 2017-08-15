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

int _Mpg123_mpg123_replace_reader_handle(struct Mpg123IFace *Self,
       mpg123_handle * mh,
       mpg123_read_handle_callback r_read,
       mpg123_lseek_handle_callback r_lseek,
       mpg123_cleanup_callback cleanup)
{
  return mpg123_replace_reader_handle(mh, r_read, r_lseek, cleanup);
}

