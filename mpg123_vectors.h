
/* This file was generated by idltool 53.23. Do not edit */

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif
#ifndef LIBRARIES_MPG123_H
#include <libraries/mpg123.h>
#endif

/* forward declaration */
struct Mpg123IFace;

extern uint32               VARARGS68K _Mpg123_Obtain(struct Mpg123IFace *);
extern uint32               VARARGS68K _Mpg123_Release(struct Mpg123IFace *);
extern mpg123_handle *      VARARGS68K _Mpg123_mpg123_new(struct Mpg123IFace *, const char * decoder, int * error);
extern void                 VARARGS68K _Mpg123_mpg123_delete(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_param(struct Mpg123IFace *, mpg123_handle * mh, enum mpg123_parms type, long value, double fvalue);
extern int                  VARARGS68K _Mpg123_mpg123_getparam(struct Mpg123IFace *, mpg123_handle * mh, enum mpg123_parms type, long * val, double * fval);
extern int                  VARARGS68K _Mpg123_mpg123_feature(struct Mpg123IFace *, enum mpg123_feature_set key);
extern const char *         VARARGS68K _Mpg123_mpg123_plain_strerror(struct Mpg123IFace *, int errcode);
extern const char *         VARARGS68K _Mpg123_mpg123_strerror(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_errcode(struct Mpg123IFace *, mpg123_handle * mh);
extern const char **        VARARGS68K _Mpg123_mpg123_decoders(struct Mpg123IFace *);
extern const char **        VARARGS68K _Mpg123_mpg123_supported_decoders(struct Mpg123IFace *);
extern int                  VARARGS68K _Mpg123_mpg123_decoder(struct Mpg123IFace *, mpg123_handle * mh, const char * decoder_name);
extern const char *         VARARGS68K _Mpg123_mpg123_current_decoder(struct Mpg123IFace *, mpg123_handle * mh);
extern void                 VARARGS68K _Mpg123_mpg123_rates(struct Mpg123IFace *, const long ** list, size_t * number);
extern void                 VARARGS68K _Mpg123_mpg123_encodings(struct Mpg123IFace *, const int ** list, size_t * number);
extern int                  VARARGS68K _Mpg123_mpg123_encsize(struct Mpg123IFace *, int encoding);
extern int                  VARARGS68K _Mpg123_mpg123_format_none(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_format_all(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_format(struct Mpg123IFace *, mpg123_handle * mh, long rate, int channels, int encodings);
extern int                  VARARGS68K _Mpg123_mpg123_format_support(struct Mpg123IFace *, mpg123_handle * mh, long rate, int encoding);
extern int                  VARARGS68K _Mpg123_mpg123_getformat(struct Mpg123IFace *, mpg123_handle * mh, long * rate, int * channels, int * encoding);
extern int                  VARARGS68K _Mpg123_mpg123_open(struct Mpg123IFace *, mpg123_handle * mh, const char * path);
extern int                  VARARGS68K _Mpg123_mpg123_open_fd(struct Mpg123IFace *, mpg123_handle * mh, int fd);
extern int                  VARARGS68K _Mpg123_mpg123_open_handle(struct Mpg123IFace *, mpg123_handle * mh, APTR iohandle);
extern int                  VARARGS68K _Mpg123_mpg123_open_feed(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_close(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_read(struct Mpg123IFace *, mpg123_handle * mh, unsigned char * outmemory, size_t outmemsize, size_t * done);
extern int                  VARARGS68K _Mpg123_mpg123_feed(struct Mpg123IFace *, mpg123_handle * mh, const unsigned char * in, size_t size);
extern int                  VARARGS68K _Mpg123_mpg123_decode(struct Mpg123IFace *, mpg123_handle * mh, const unsigned char * inmemory, size_t inmemsize, unsigned char * outmemory, size_t outmemsize, size_t * done);
extern int                  VARARGS68K _Mpg123_mpg123_decode_frame(struct Mpg123IFace *, mpg123_handle * mh, off_t * num, unsigned char ** audio, size_t * bytes);
extern int                  VARARGS68K _Mpg123_mpg123_framebyframe_decode(struct Mpg123IFace *, mpg123_handle * mh, off_t * num, unsigned char ** audio, size_t * bytes);
extern int                  VARARGS68K _Mpg123_mpg123_framebyframe_next(struct Mpg123IFace *, mpg123_handle * mh);
extern off_t                VARARGS68K _Mpg123_mpg123_tell(struct Mpg123IFace *, mpg123_handle * mh);
extern off_t                VARARGS68K _Mpg123_mpg123_tellframe(struct Mpg123IFace *, mpg123_handle * mh);
extern off_t                VARARGS68K _Mpg123_mpg123_tell_stream(struct Mpg123IFace *, mpg123_handle * mh);
extern off_t                VARARGS68K _Mpg123_mpg123_seek(struct Mpg123IFace *, mpg123_handle * mh, off_t sampleoff, int whence);
extern off_t                VARARGS68K _Mpg123_mpg123_feedseek(struct Mpg123IFace *, mpg123_handle * mh, off_t sampleoff, int whence, off_t * input_offset);
extern off_t                VARARGS68K _Mpg123_mpg123_seek_frame(struct Mpg123IFace *, mpg123_handle * mh, off_t frameoff, int whence);
extern off_t                VARARGS68K _Mpg123_mpg123_timeframe(struct Mpg123IFace *, mpg123_handle * mh, double sec);
extern int                  VARARGS68K _Mpg123_mpg123_index(struct Mpg123IFace *, mpg123_handle * mh, off_t ** offsets, off_t * step, size_t * fill);
extern int                  VARARGS68K _Mpg123_mpg123_set_index(struct Mpg123IFace *, mpg123_handle * mh, off_t * offsets, off_t step, size_t fill);
extern int                  VARARGS68K _Mpg123_mpg123_eq(struct Mpg123IFace *, mpg123_handle * mh, enum mpg123_channels channel, int band, double val);
extern double               VARARGS68K _Mpg123_mpg123_geteq(struct Mpg123IFace *, mpg123_handle * mh, enum mpg123_channels channel, int band);
extern int                  VARARGS68K _Mpg123_mpg123_reset_eq(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_volume(struct Mpg123IFace *, mpg123_handle * mh, double vol);
extern int                  VARARGS68K _Mpg123_mpg123_volume_change(struct Mpg123IFace *, mpg123_handle * mh, double change);
extern int                  VARARGS68K _Mpg123_mpg123_getvolume(struct Mpg123IFace *, mpg123_handle * mh, double * base, double * really, double * rva_db);
extern int                  VARARGS68K _Mpg123_mpg123_info(struct Mpg123IFace *, mpg123_handle * mh, struct mpg123_frameinfo * mi);
extern size_t               VARARGS68K _Mpg123_mpg123_safe_buffer(struct Mpg123IFace *);
extern int                  VARARGS68K _Mpg123_mpg123_scan(struct Mpg123IFace *, mpg123_handle * mh);
extern off_t                VARARGS68K _Mpg123_mpg123_length(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_set_filesize(struct Mpg123IFace *, mpg123_handle * mh, off_t size);
extern double               VARARGS68K _Mpg123_mpg123_tpf(struct Mpg123IFace *, mpg123_handle * mh);
extern long                 VARARGS68K _Mpg123_mpg123_clip(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_getstate(struct Mpg123IFace *, mpg123_handle * mh, enum mpg123_state key, long * val, double * fval);
extern void                 VARARGS68K _Mpg123_mpg123_init_string(struct Mpg123IFace *, mpg123_string * sb);
extern void                 VARARGS68K _Mpg123_mpg123_free_string(struct Mpg123IFace *, mpg123_string * sb);
extern int                  VARARGS68K _Mpg123_mpg123_resize_string(struct Mpg123IFace *, mpg123_string * sb, size_t news);
extern int                  VARARGS68K _Mpg123_mpg123_grow_string(struct Mpg123IFace *, mpg123_string * sb, size_t news);
extern int                  VARARGS68K _Mpg123_mpg123_copy_string(struct Mpg123IFace *, mpg123_string * sb, mpg123_string * to);
extern int                  VARARGS68K _Mpg123_mpg123_add_string(struct Mpg123IFace *, mpg123_string * sb, const char * stuff);
extern int                  VARARGS68K _Mpg123_mpg123_add_substring(struct Mpg123IFace *, mpg123_string * sb, const char * stuff, size_t from, size_t count);
extern int                  VARARGS68K _Mpg123_mpg123_set_string(struct Mpg123IFace *, mpg123_string * sb, const char * stuff);
extern int                  VARARGS68K _Mpg123_mpg123_set_substring(struct Mpg123IFace *, mpg123_string * sb, const char * stuff, size_t from, size_t count);
extern size_t               VARARGS68K _Mpg123_mpg123_strlen(struct Mpg123IFace *, mpg123_string * sb, int utf8);
extern enum mpg123_text_encoding VARARGS68K _Mpg123_mpg123_enc_from_id3(struct Mpg123IFace *, unsigned char id3_enc_byte);
extern int                  VARARGS68K _Mpg123_mpg123_store_utf8(struct Mpg123IFace *, mpg123_string * sb, enum mpg123_text_encoding enc, const unsigned char * source, size_t source_size);
extern int                  VARARGS68K _Mpg123_mpg123_meta_check(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_id3(struct Mpg123IFace *, mpg123_handle * mh, mpg123_id3v1 ** v1, mpg123_id3v2 ** v2);
extern int                  VARARGS68K _Mpg123_mpg123_icy(struct Mpg123IFace *, mpg123_handle * mh, char ** icy_meta);
extern char *               VARARGS68K _Mpg123_mpg123_icy2utf8(struct Mpg123IFace *, const char * icy_text);
extern mpg123_handle *      VARARGS68K _Mpg123_mpg123_parnew(struct Mpg123IFace *, mpg123_pars * mp, const char * decoder, int * error);
extern mpg123_pars *        VARARGS68K _Mpg123_mpg123_new_pars(struct Mpg123IFace *, int * error);
extern void                 VARARGS68K _Mpg123_mpg123_delete_pars(struct Mpg123IFace *, mpg123_pars * mp);
extern int                  VARARGS68K _Mpg123_mpg123_fmt_none(struct Mpg123IFace *, mpg123_pars * mp);
extern int                  VARARGS68K _Mpg123_mpg123_fmt_all(struct Mpg123IFace *, mpg123_pars * mp);
extern int                  VARARGS68K _Mpg123_mpg123_fmt(struct Mpg123IFace *, mpg123_pars * mp, long rate, int channels, int encodings);
extern int                  VARARGS68K _Mpg123_mpg123_fmt_support(struct Mpg123IFace *, mpg123_pars * mp, long rate, int encoding);
extern int                  VARARGS68K _Mpg123_mpg123_par(struct Mpg123IFace *, mpg123_pars * mp, enum mpg123_parms type, long value, double fvalue);
extern int                  VARARGS68K _Mpg123_mpg123_getpar(struct Mpg123IFace *, mpg123_pars * mp, enum mpg123_parms type, long * val, double * fval);
extern int                  VARARGS68K _Mpg123_mpg123_replace_buffer(struct Mpg123IFace *, mpg123_handle * mh, unsigned char * data, size_t size);
extern size_t               VARARGS68K _Mpg123_mpg123_outblock(struct Mpg123IFace *, mpg123_handle * mh);
extern int                  VARARGS68K _Mpg123_mpg123_replace_reader(struct Mpg123IFace *, mpg123_handle * mh, mpg123_read_callback r_read, mpg123_lseek_callback r_lseek);
extern int                  VARARGS68K _Mpg123_mpg123_replace_reader_handle(struct Mpg123IFace *, mpg123_handle * mh, mpg123_read_handle_callback r_read, mpg123_lseek_handle_callback r_lseek, mpg123_cleanup_callback cleanup);
