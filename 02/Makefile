CC=gcc
CFLAGS=-Wall -Og -ggdb2 -MMD

all: main

main: main.o

clean:
	rm -f *.d *.o *.so *.so.* main $(AUX_BUILD)

%: %.o
	$(CC) $(LDFLAGS) -o$@ $^ $(LDLIBS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o$@ $<

.PHONY: all clean

-include Makefile.local
-include *.d

all: $(AUX_BUILD)
