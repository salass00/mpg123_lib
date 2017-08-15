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

#ifndef LIBRARIES_MPG123_H
#define LIBRARIES_MPG123_H

#include <mpg123.h>

/* These are necessary for the XML interface file to work */

typedef ssize_t (*mpg123_read_callback) (int, void *, size_t);
typedef off_t (*mpg123_lseek_callback) (int, off_t, int);

typedef ssize_t (*mpg123_read_handle_callback) (void *, void *, size_t);
typedef off_t (*mpg123_lseek_handle_callback) (void *, off_t, int);
typedef void (*mpg123_cleanup_callback) (void *);

#endif /* LIBRARIES_MPG123_H */

