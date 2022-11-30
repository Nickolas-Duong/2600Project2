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

all: include/day.h src/day.c src/TravelExpenseMain.c include/display.h include/Food.h include/hotel.h include/input.h include/trip.h src/display.c src/hotel.c src/input.c src/trip.c
	$(CC) -o test$(EXT) include/day.h src/day.c src/TravelExpenseMain.c include/display.h include/hotel.h include/input.h include/trip.h src/display.c src/hotel.c src/input.c src/trip.c