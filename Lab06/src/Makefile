TARGET := remote sort.s

CC := gcc
CFLAGS := -std=gnu17 -Wall -Wextra -g
LDLIBS := -lseccomp

.PHONY: all
all: $(TARGET)

#x86-64 gcc 13.1 https://godbolt.org/
sort.s: sort.c
	$(CC) $< $(CLFAGS) -S -fno-asynchronous-unwind-tables -masm=intel -Os -fno-tree-loop-distribute-patterns -o sort.s

.PHONY: clean
clean:
	rm -f *.o $(TARGET)

