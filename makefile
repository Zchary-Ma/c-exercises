OBJS=main.o ds.o
DS_DIR=src/DS
CC=gcc
CFLAGS=-c -Wall -g

ds:$(OBJS)
	$(CC) $^ -o $@

%.o:%.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	rm -fr *.o main