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

