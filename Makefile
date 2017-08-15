TARGET  := mpg123.library
VERSION := 53

MPG123DIR := mpg123-1.25.4

CC     := ppc-amigaos-gcc
STRIP  := ppc-amigaos-strip
AR     := ppc-amigaos-ar
RANLIB := ppc-amigaos-ranlib

BUILDSYS := $(shell uname -s)

# Only use host argument if cross-compiling
ifneq ($(BUILDSYS),AmigaOS)
	HOSTARG := --host=ppc-amigaos
else
	HOSTARG := 
endif

CFLAGS  := -O2 -g -Wall -Wwrite-strings -Werror -I./include -I./mpg123-build/src/libmpg123 -I./$(MPG123DIR)/src/libmpg123
LDFLAGS := -static
LIBS    := 

SRCS := init.c

main_SRCS = main/Obtain.c main/Release.c main/mpg123_new.c main/mpg123_delete.c \
    main/mpg123_param.c main/mpg123_getparam.c main/mpg123_feature.c \
    main/mpg123_plain_strerror.c main/mpg123_strerror.c main/mpg123_errcode.c \
    main/mpg123_decoders.c main/mpg123_supported_decoders.c \
    main/mpg123_decoder.c main/mpg123_current_decoder.c main/mpg123_rates.c \
    main/mpg123_encodings.c main/mpg123_encsize.c main/mpg123_format_none.c \
    main/mpg123_format_all.c main/mpg123_format.c main/mpg123_format_support.c \
    main/mpg123_getformat.c main/mpg123_open.c main/mpg123_open_fd.c \
    main/mpg123_open_handle.c main/mpg123_open_feed.c main/mpg123_close.c \
    main/mpg123_read.c main/mpg123_feed.c main/mpg123_decode.c \
    main/mpg123_decode_frame.c main/mpg123_framebyframe_decode.c \
    main/mpg123_framebyframe_next.c main/mpg123_tell.c main/mpg123_tellframe.c \
    main/mpg123_tell_stream.c main/mpg123_seek.c main/mpg123_feedseek.c \
    main/mpg123_seek_frame.c main/mpg123_timeframe.c main/mpg123_index.c \
    main/mpg123_set_index.c main/mpg123_eq.c main/mpg123_geteq.c \
    main/mpg123_reset_eq.c main/mpg123_volume.c main/mpg123_volume_change.c \
    main/mpg123_getvolume.c main/mpg123_info.c main/mpg123_safe_buffer.c \
    main/mpg123_scan.c main/mpg123_length.c main/mpg123_set_filesize.c \
    main/mpg123_tpf.c main/mpg123_clip.c main/mpg123_getstate.c \
    main/mpg123_init_string.c main/mpg123_free_string.c \
    main/mpg123_resize_string.c main/mpg123_grow_string.c \
    main/mpg123_copy_string.c main/mpg123_add_string.c \
    main/mpg123_add_substring.c main/mpg123_set_string.c \
    main/mpg123_set_substring.c main/mpg123_strlen.c main/mpg123_enc_from_id3.c \
    main/mpg123_store_utf8.c main/mpg123_meta_check.c main/mpg123_id3.c \
    main/mpg123_icy.c main/mpg123_icy2utf8.c main/mpg123_parnew.c \
    main/mpg123_new_pars.c main/mpg123_delete_pars.c main/mpg123_fmt_none.c \
    main/mpg123_fmt_all.c main/mpg123_fmt.c main/mpg123_fmt_support.c \
    main/mpg123_par.c main/mpg123_getpar.c main/mpg123_replace_buffer.c \
    main/mpg123_outblock.c main/mpg123_replace_reader.c \
    main/mpg123_replace_reader_handle.c main/mpg123_getformat2.c \
    main/mpg123_framedata.c main/mpg123_framepos.c main/mpg123_position.c \
    main/mpg123_framelength.c main/mpg123_spf.c main/mpg123_chomp_string.c \
    main/mpg123_meta_free.c 
main_OBJS := $(main_SRCS:.c=.o)

OBJS := $(SRCS:.c=.o) $(main_OBJS)

STATIC_SRCS := static/autoinit_mpg123_base.c static/autoinit_mpg123_main.c static/stubs.c
STATIC_OBJS := $(STATIC_SRCS:.c=.o)

.PHONY: all
all: $(TARGET) $(TARGET).altivec havealtivec libmpg123.a

init.o: $(TARGET)_rev.h mpg123_vectors.c mpg123_vectors.h
$(main_OBJS): mpg123_vectors.h

mpg123-build/Makefile: $(MPG123DIR)/configure
	mkdir -p mpg123-build
	rm -rf mpg123-build/*
	cd mpg123-build && ../$(MPG123DIR)/configure --prefix=/SDK/local/newlib $(HOSTARG) --disable-shared --disable-messages --with-cpu=generic_fpu
	sed -i 's/#define HAVE_TERMIOS 1/\/* #undef HAVE_TERMIOS *\//' mpg123-build/src/config.h

.PHONY: build-mpg123
build-mpg123: mpg123-build/Makefile
	$(MAKE) -C mpg123-build

$(TARGET): build-mpg123 $(OBJS)
	$(CC) $(LDFLAGS) -nostartfiles -o $@.debug $(OBJS) mpg123-build/src/libmpg123/.libs/libmpg123.a $(LIBS)
	$(STRIP) -R.comment -o $@ $@.debug

mpg123-build-altivec/Makefile: $(MPG123DIR)/configure
	mkdir -p mpg123-build-altivec
	rm -rf mpg123-build-altivec/*
	cd mpg123-build-altivec && ../$(MPG123DIR)/configure --prefix=/SDK/local/newlib $(HOSTARG) --disable-shared --disable-messages --with-cpu=altivec
	sed -i 's/#define HAVE_TERMIOS 1/\/* #undef HAVE_TERMIOS *\//' mpg123-build-altivec/src/config.h

.PHONY: build-mpg123-altivec
build-mpg123-altivec: mpg123-build-altivec/Makefile
	$(MAKE) -C mpg123-build-altivec

$(TARGET).altivec: build-mpg123-altivec $(OBJS)
	$(CC) $(LDFLAGS) -nostartfiles -o $@.debug $(OBJS) mpg123-build-altivec/src/libmpg123/.libs/libmpg123.a $(LIBS)
	$(STRIP) -R.comment -o $@ $@.debug

havealtivec: havealtivec.c
	$(CC) -nostartfiles -o $@ $^

libmpg123.a: $(STATIC_OBJS)
	$(AR) -crv $@ $^
	$(RANLIB) $@

.PHONY: clean
clean:
	rm -f *.o main/*.o
	rm -rf mpg123-build
	rm -rf mpg123-build-altivec

.PHONY: revision
revision:
	bumprev $(VERSION) $(TARGET)

