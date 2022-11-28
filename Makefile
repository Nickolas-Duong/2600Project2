CC=gcc

ifeq ($(OS), Windows_NT)
	ARFLAGS=-rc
	DELETE=del
	EXT=.exe
else
	UNAME_S := $(shell uname -s)
	ifeq ($UNAME_S, Darwin)
		ARFLAGS=rcs
		DELETE = rm -f
		EXT = .out
	endif
endif

all: include/day.h src/day.c test/day/main.c
	$(CC) -o test/day/test$(EXT) include/day.h src/day.c test/day/main.c