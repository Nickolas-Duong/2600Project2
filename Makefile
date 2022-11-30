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

all: include/day.h src/day.c src/TravelExpenseMain.c include/display.h include/Food.h include/hotel.h include/input.h include/trip.h src/display.c src/hotel.c src/input.c src/trip.c src/Food.c
	$(CC) -o bin/project$(EXT) include/day.h src/day.c src/TravelExpenseMain.c include/display.h include/hotel.h include/input.h include/trip.h src/display.c src/hotel.c src/input.c src/trip.c include/Food.h src/Food.c

compileall: day main display hotel input trip Food

day: src/day.c 
	$(CC) -c src/day.c -o obj/day.o

main: src/TravelExpenseMain.c
	$(CC) -c src/TravelExpenseMain.c -o obj/TravelExpenseMain.o

display: src/display.c
	$(CC) -c src/display.c -o obj/display.o

hotel: src/hotel.c
	$(CC) -c src/hotel.c -o obj/hotel.o

input: src/input.c
	$(CC) -c src/input.c -o obj/input.o

trip: src/trip.c
	$(CC) -c src/trip.c -o obj/trip.o

Food: src/Food.c
	$(CC) -c src/Food.c -o obj/Food.o

delete: project$(EXT)
	$(DELETE) bin/project$(EXT)