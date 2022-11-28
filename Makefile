CC=gcc

all: include/day.h src/day.c test/day/main.c
	$(CC) -o test/day/test.exe include/day.h src/day.c test/day/main.c