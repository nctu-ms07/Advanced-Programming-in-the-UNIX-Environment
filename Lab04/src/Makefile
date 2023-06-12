TARGET := solver

CC := gcc
CFLAGS := -std=gnu17 -Wall -Wextra -g -fPIC -fstack-protector
LDFLAGS := -shared -z now

.PHONY: all
all: $(TARGET)

.PHONY: clean
clean:
	rm -f *.o $(TARGET)

