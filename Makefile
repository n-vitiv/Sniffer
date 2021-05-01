CC = gcc

.PHONY: all clean

all:
	$(CC) main.c func.c -g -o main

clean:
	rm main