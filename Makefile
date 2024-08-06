CC = gcc
CFLAGS = -Iinclude
# TODO: dependencies can be generated from compiler 
DEPS = include/*.h
OBJ = hello.o linkedlist.o

hello: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: src/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f *.o hello