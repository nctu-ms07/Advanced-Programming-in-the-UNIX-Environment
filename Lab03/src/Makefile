TARGET := chals libpoem.so

CC := gcc
CFLAGS := -std=gnu99 -Wall -Wextra -g -fpic
LDFLAGS := -pie -z now
LDLIBS := -lunwind -lunwind-$(shell uname -m)

.PHONY: all
all: $(TARGET)

%.o: %.c
	$(CC) $< $(CFLAGS) -c -o $@

libpoem.so: libpoem.o
	$(CC) $< -shared $(LDLIBS) -o $@

chals: chals.o libpoem.so

.PHONY: parse_chals
parse_chals:
	/usr/bin/env python3 ./parse_chals.py

libsolver.so: libsolver.o
	$(CC) $< -shared -ldl -o $@

.PHONY: test
test: | parse_chals libsolver.so
	LD_LIBRARY_PATH=$(shell pwd) LD_PRELOAD=./libsolver.so ./chals

.PHONY: run
run:
	LD_LIBRARY_PATH=$(shell pwd) ./chals

.PHONY: clean
clean:
	rm -f *.o $(TARGET) got_offset.h libsolver.so

