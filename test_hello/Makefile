.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g  -Iffmpeg/include -Lffmpeg/lib/ -lavdevice -lavformat -lavfilter -lavcodec -lswscale -lavutil -lswresample
BIN=hello_ffmpeg
all:$(BIN)
%.o:%.c%.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -f *.o $(BIN)
