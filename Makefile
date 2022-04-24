PREFIX = /usr/local
BINDIR = $(PREFIX)/bin
CC = cc

all : djb2

djb2 :
	$(CC) $(CFLAGS) djb2.c -o djb2 $(LDFLAGS)

install : all
	install -o 755 djb2 $(BINDIR)

clean :
	rm djb2
