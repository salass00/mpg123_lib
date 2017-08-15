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

#include <proto/mpg123.h>

int mpg123_init(void) {
	/* No-op */
	return MPG123_OK;
}

void mpg123_exit(void) {
	/* No-op */
}

mpg123_handle *mpg123_new(const char* decoder, int *error) {
	return IMpg123->mpg123_new(decoder, error);
}

void mpg123_delete(mpg123_handle *mh) {
	return IMpg123->mpg123_delete(mh);
}

int mpg123_param(mpg123_handle *mh, enum mpg123_parms type, long value, double fvalue) {
	return IMpg123->mpg123_param(mh, type, value, fvalue);
}

int mpg123_getparam(mpg123_handle *mh, enum mpg123_parms type, long *value, double *fvalue) {
	return IMpg123->mpg123_getparam(mh, type, value, fvalue);
}

int mpg123_feature(const enum mpg123_feature_set key) {
	return IMpg123->mpg123_feature(key);
}

const char* mpg123_plain_strerror(int errcode) {
	return IMpg123->mpg123_plain_strerror(errcode);
}

const char* mpg123_strerror(mpg123_handle *mh) {
	return IMpg123->mpg123_strerror(mh);
}

int mpg123_errcode(mpg123_handle *mh) {
	return IMpg123->mpg123_errcode(mh);
}

const char **mpg123_decoders(void) {
	return IMpg123->mpg123_decoders();
}

const char **mpg123_supported_decoders(void) {
	return IMpg123->mpg123_supported_decoders();
}

int mpg123_decoder(mpg123_handle *mh, const char* decoder_name) {
	return IMpg123->mpg123_decoder(mh, decoder_name);
}

const char* mpg123_current_decoder(mpg123_handle *mh) {
	return IMpg123->mpg123_current_decoder(mh);
}

void mpg123_rates(const long **list, size_t *number) {
	IMpg123->mpg123_rates(list, number);
}

void mpg123_encodings(const int **list, size_t *number) {
	IMpg123->mpg123_encodings(list, number);
}

int mpg123_encsize(int encoding) {
	return IMpg123->mpg123_encsize(encoding);
}

int mpg123_format_none(mpg123_handle *mh) {
	return IMpg123->mpg123_format_none(mh);
}

int mpg123_format_all(mpg123_handle *mh) {
	return IMpg123->mpg123_format_all(mh);
}

int mpg123_format(mpg123_handle *mh, long rate, int channels, int encodings) {
	return IMpg123->mpg123_format(mh, rate, channels, encodings);
}

int mpg123_format_support(mpg123_handle *mh, long rate, int encoding) {
	return IMpg123->mpg123_format_support(mh, rate, encoding);
}

int mpg123_getformat(mpg123_handle *mh, long *rate, int *channels, int *encoding) {
	return IMpg123->mpg123_getformat(mh, rate, channels, encoding);
}

/* V53.2 */
int mpg123_getformat2(mpg123_handle *mh, long *rate, int *channels, int *encoding, int clear_flag) {
	return IMpg123->mpg123_getformat2(mh, rate, channels, encoding, clear_flag);
}

int mpg123_open(mpg123_handle *mh, const char *path) {
	return IMpg123->mpg123_open(mh, path);
}

int mpg123_open_fd(mpg123_handle *mh, int fd) {
	return IMpg123->mpg123_open_fd(mh, fd);
}

int mpg123_open_handle(mpg123_handle *mh, void *iohandle) {
	return IMpg123->mpg123_open_handle(mh, iohandle);
}

int mpg123_open_feed(mpg123_handle *mh) {
	return IMpg123->mpg123_open_feed(mh);
}

int mpg123_close(mpg123_handle *mh) {
	return IMpg123->mpg123_close(mh);
}

int mpg123_read(mpg123_handle *mh, unsigned char *outmemory, size_t outmemsize, size_t *done) {
	return IMpg123->mpg123_read(mh, outmemory, outmemsize, done);
}

int mpg123_feed(mpg123_handle *mh, const unsigned char *in, size_t size) {
	return IMpg123->mpg123_feed(mh, in, size);
}

int mpg123_decode(mpg123_handle *mh, const unsigned char *inmemory, size_t inmemsize,
                  unsigned char *outmemory, size_t outmemsize, size_t *done)
{
	return IMpg123->mpg123_decode(mh, inmemory, inmemsize, outmemory, outmemsize, done);
}

int mpg123_decode_frame(mpg123_handle *mh, off_t *num, unsigned char **audio, size_t *bytes) {
	return IMpg123->mpg123_decode_frame(mh, num, audio, bytes);
}

int mpg123_framebyframe_decode(mpg123_handle *mh, off_t *num, unsigned char **audio, size_t *bytes) {
	return IMpg123->mpg123_framebyframe_decode(mh, num, audio, bytes);
}

int mpg123_framebyframe_next(mpg123_handle *mh) {
	return IMpg123->mpg123_framebyframe_next(mh);
}

/* V53.2 */
int mpg123_framedata(mpg123_handle *mh, unsigned long *header, unsigned char **bodydata, size_t *bodybytes) {
	return IMpg123->mpg123_framedata(mh, header, bodydata, bodybytes);
}

/* V53.2 */
off_t mpg123_framepos(mpg123_handle *mh) {
	return IMpg123->mpg123_framepos(mh);
}

off_t mpg123_tell(mpg123_handle *mh) {
	return IMpg123->mpg123_tell(mh);
}

off_t mpg123_tellframe(mpg123_handle *mh) {
	return IMpg123->mpg123_tellframe(mh);
}

off_t mpg123_tell_stream(mpg123_handle *mh) {
	return IMpg123->mpg123_tell_stream(mh);
}

off_t mpg123_seek(mpg123_handle *mh, off_t sampleoff, int whence) {
	return IMpg123->mpg123_seek(mh, sampleoff, whence);
}

off_t mpg123_feedseek(mpg123_handle *mh, off_t sampleoff, int whence, off_t *input_offset) {
	return IMpg123->mpg123_feedseek(mh, sampleoff, whence, input_offset);
}

off_t mpg123_seek_frame(mpg123_handle *mh, off_t frameoff, int whence) {
	return IMpg123->mpg123_seek_frame(mh, frameoff, whence);
}

off_t mpg123_timeframe(mpg123_handle *mh, double sec) {
	return IMpg123->mpg123_timeframe(mh, sec);
}

int mpg123_index(mpg123_handle *mh, off_t **offsets, off_t *step, size_t *fill) {
	return IMpg123->mpg123_index(mh, offsets, step, fill);
}

int mpg123_set_index(mpg123_handle *mh, off_t *offsets, off_t step, size_t fill) {
	return IMpg123->mpg123_set_index(mh, offsets, step, fill);
}

/* V53.2 */
int mpg123_position(mpg123_handle *mh, off_t frame_offset, off_t buffered_bytes, off_t *current_frame,
                    off_t *frames_left, double *current_seconds, double *seconds_left)
{
	return IMpg123->mpg123_position(mh, frame_offset, buffered_bytes, current_frame, frames_left, current_seconds, seconds_left);
}

int mpg123_eq(mpg123_handle *mh, enum mpg123_channels channel, int band, double val) {
	return IMpg123->mpg123_eq(mh, channel, band, val);
}

double mpg123_geteq(mpg123_handle *mh, enum mpg123_channels channel, int band) {
	return IMpg123->mpg123_geteq(mh, channel, band);
}

int mpg123_reset_eq(mpg123_handle *mh) {
	return IMpg123->mpg123_reset_eq(mh);
}

int mpg123_volume(mpg123_handle *mh, double vol) {
	return IMpg123->mpg123_volume(mh, vol);
}

int mpg123_volume_change(mpg123_handle *mh, double change) {
	return IMpg123->mpg123_volume_change(mh, change);
}

int mpg123_getvolume(mpg123_handle *mh, double *base, double *really, double *rva_db) {
	return IMpg123->mpg123_getvolume(mh, base, really, rva_db);
}

int mpg123_info(mpg123_handle *mh, struct mpg123_frameinfo *mi) {
	return IMpg123->mpg123_info(mh, mi);
}

size_t mpg123_safe_buffer(void) {
	return IMpg123->mpg123_safe_buffer();
}

int mpg123_scan(mpg123_handle *mh) {
	return IMpg123->mpg123_scan(mh);
}

/* V53.2 */
off_t mpg123_framelength(mpg123_handle *mh) {
	return IMpg123->mpg123_framelength(mh);
}

off_t mpg123_length(mpg123_handle *mh) {
	return IMpg123->mpg123_length(mh);
}

int mpg123_set_filesize(mpg123_handle *mh, off_t size) {
	return IMpg123->mpg123_set_filesize(mh, size);
}

double mpg123_tpf(mpg123_handle *mh) {
	return IMpg123->mpg123_tpf(mh);
}

/* V53.2 */
int mpg123_spf(mpg123_handle *mh) {
	return IMpg123->mpg123_spf(mh);
}

long mpg123_clip(mpg123_handle *mh) {
	return IMpg123->mpg123_clip(mh);
}

int mpg123_getstate(mpg123_handle *mh, enum mpg123_state key, long *val, double *fval) {
	return IMpg123->mpg123_getstate(mh, key, val, fval);
}

void mpg123_init_string(mpg123_string* sb) {
	IMpg123->mpg123_init_string(sb);
}

void mpg123_free_string(mpg123_string* sb) {
	IMpg123->mpg123_free_string(sb);
}

int mpg123_resize_string(mpg123_string* sb, size_t news) {
	return IMpg123->mpg123_resize_string(sb, news);
}

int mpg123_grow_string(mpg123_string* sb, size_t news) {
	return IMpg123->mpg123_grow_string(sb, news);
}

int mpg123_copy_string(mpg123_string* from, mpg123_string* to) {
	return IMpg123->mpg123_copy_string(from, to);
}

int mpg123_add_string(mpg123_string* sb, const char* stuff) {
	return IMpg123->mpg123_add_string(sb, stuff);
}

int mpg123_add_substring(mpg123_string *sb, const char *stuff, size_t from, size_t count) {
	return IMpg123->mpg123_add_substring(sb, stuff, from, count);
}

int mpg123_set_string(mpg123_string* sb, const char* stuff) {
	return IMpg123->mpg123_set_string(sb, stuff);
}

int mpg123_set_substring(mpg123_string *sb, const char *stuff, size_t from, size_t count) {
	return IMpg123->mpg123_set_substring(sb, stuff, from, count);
}

size_t mpg123_strlen(mpg123_string *sb, int utf8) {
	return IMpg123->mpg123_strlen(sb, utf8);
}

/* V53.2 */
int mpg123_chomp_string(mpg123_string *sb) {
	return IMpg123->mpg123_chomp_string(sb);
}

enum mpg123_text_encoding mpg123_enc_from_id3(unsigned char id3_enc_byte) {
	return IMpg123->mpg123_enc_from_id3(id3_enc_byte);
}

int mpg123_store_utf8(mpg123_string *sb, enum mpg123_text_encoding enc, const unsigned char *source, size_t source_size) {
	return IMpg123->mpg123_store_utf8(sb, enc, source, source_size);
}

int mpg123_meta_check(mpg123_handle *mh) {
	return IMpg123->mpg123_meta_check(mh);
}

/* V53.2 */
void mpg123_meta_free(mpg123_handle *mh) {
	return IMpg123->mpg123_meta_free(mh);
}

int mpg123_id3(mpg123_handle *mh, mpg123_id3v1 **v1, mpg123_id3v2 **v2) {
	return IMpg123->mpg123_id3(mh, v1, v2);
}

int mpg123_icy(mpg123_handle *mh, char **icy_meta) {
	return IMpg123->mpg123_icy(mh, icy_meta);
}

char* mpg123_icy2utf8(const char* icy_text) {
	return IMpg123->mpg123_icy2utf8(icy_text);
}

mpg123_handle *mpg123_parnew(mpg123_pars *mp, const char* decoder, int *error) {
	return IMpg123->mpg123_parnew(mp, decoder, error);
}

mpg123_pars *mpg123_new_pars(int *error) {
	return IMpg123->mpg123_new_pars(error);
}

void mpg123_delete_pars(mpg123_pars* mp) {
	IMpg123->mpg123_delete_pars(mp);
}

int mpg123_fmt_none(mpg123_pars *mp) {
	return IMpg123->mpg123_fmt_none(mp);
}

int mpg123_fmt_all(mpg123_pars *mp) {
	return IMpg123->mpg123_fmt_all(mp);
}

int mpg123_fmt(mpg123_pars *mp, long rate, int channels, int encodings) {
	return IMpg123->mpg123_fmt(mp, rate, channels, encodings);
}

int mpg123_fmt_support(mpg123_pars *mp, long rate, int encoding) {
	return IMpg123->mpg123_fmt_support(mp, rate, encoding);
}

int mpg123_par(mpg123_pars *mp, enum mpg123_parms type, long value, double fvalue) {
	return IMpg123->mpg123_par(mp, type, value, fvalue);
}

int mpg123_getpar( mpg123_pars *mp, enum mpg123_parms type, long *value, double *fvalue) {
	return IMpg123->mpg123_getpar(mp, type, value, fvalue);
}

int mpg123_replace_buffer(mpg123_handle *mh, unsigned char *data, size_t size) {
	return IMpg123->mpg123_replace_buffer(mh, data, size);
}

size_t mpg123_outblock(mpg123_handle *mh) {
	return IMpg123->mpg123_outblock(mh);
}

int mpg123_replace_reader(mpg123_handle *mh, ssize_t (*r_read)(int, void *, size_t),
                          off_t (*r_lseek)(int, off_t, int))
{
	return IMpg123->mpg123_replace_reader(mh, r_read, r_lseek);
}

int mpg123_replace_reader_handle(mpg123_handle *mh, ssize_t (*r_read)(void *, void *, size_t),
                                 off_t (*r_lseek)(void *, off_t, int), void (*cleanup)(void*))
{
	return IMpg123->mpg123_replace_reader_handle(mh, r_read, r_lseek, cleanup);
}

