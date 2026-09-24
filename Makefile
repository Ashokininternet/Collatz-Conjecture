CC = gcc

all: main main_linux

main: main.c
	$(CC) -o main main.c
main_linux: main_linux.c
	$(CC) -o main_linux main_linux.c

clean: 
	rm main_linux main
