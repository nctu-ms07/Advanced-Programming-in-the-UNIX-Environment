TARGET := sdb

CC := gcc
CFLAGS := -std=gnu99 -Wall -Wextra -g -static
LDFLAGS := -z norelro -z execstack
LDLIBS := -lcapstone

.PHONY: all
all: $(TARGET)

.PHONY: clean
clean:
	rm -f *.o $(TARGET)

