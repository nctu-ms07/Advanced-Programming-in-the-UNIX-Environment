TARGET := sandbox

CC := gcc
CFLAGS := -std=gnu99 -Wall -Wextra -g -fpic
LDLIBS := -shared -ldl

.PHONY: all
all: $(TARGET)
	mv -f $(TARGET) $(TARGET).so

.PHONY: clean
clean:
	rm -f *.o $(TARGET) $(TARGET).so *.log *.html
