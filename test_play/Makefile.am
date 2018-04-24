AUTOMAKE_OPTIONS=foreign
bin_PROGRAMS=play_ffmpeg
play_ffmpeg_SOURCES=play_ffmpeg.c
#play_ffmpeg_LDADD=
play_ffmpeg_LDFLAGS=-Lffmpeg/lib/ -lavdevice -lavformat -lavfilter -lavcodec -lswscale -lavutil -lswresample
play_ffmpeg_CFLAGS=-Iffmpeg/include -O2 -g
