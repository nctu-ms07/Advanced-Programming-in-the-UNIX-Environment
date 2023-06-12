#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <sys/random.h>

#define errquit(m) { perror(m); exit(-1); }

#include "kshram.h"

#define KSHRAM_SLOTS	8

#define CRLF			"\n"

void handler(int s) {
	return;
}

int main(int argc, char *argv[]) {
	int i, fd, n, memsz;
	char name[32], *mem;
	int sizes[KSHRAM_SLOTS];

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	getrandom(&fd, sizeof(fd), 0);
	srand(fd);

	if((fd = open("/dev/kshram0", O_RDWR)) < 0) errquit("open");
	if((n = ioctl(fd, KSHRAM_GETSLOTS, NULL)) < 0) errquit("ioctl:slots");
	close(fd);

	if(n != KSHRAM_SLOTS) {
		fprintf(stderr, "kshram: expect %d got %d" CRLF, KSHRAM_SLOTS, n);
		return -1;
	}

	fprintf(stderr, "kshram: %d slots detected" CRLF, n);
	for(i = 0; i < n; i++) {
		snprintf(name, sizeof(name), "/dev/kshram%d", i);
		if((fd = open(name, O_RDWR)) < 0) {
			fprintf(stderr, "%s/open: %s." CRLF, name, strerror(errno));
			goto next;
		}
		sizes[i] = 1024*1024 + (i+1)*4096;
		if(ioctl(fd, KSHRAM_SETSIZE, sizes[i]) < 0) {
			fprintf(stderr, "%s/set_size: %s." CRLF, name, strerror(errno));
		}
next:
		close(fd);
	}

	for(i = 0; i < n; i++) {
		snprintf(name, sizeof(name), "/dev/kshram%d", i);
		if((fd = open(name, O_RDWR)) < 0) {
			fprintf(stderr, "%s/open: %s." CRLF, name, strerror(errno));
			goto skip;
		}
		if((memsz = ioctl(fd, KSHRAM_GETSIZE, NULL)) < 0) {
			fprintf(stderr, "%s/get_size: %s." CRLF, name, strerror(errno));
			goto skip;
		} else if(sizes[i] != memsz) {
			fprintf(stderr, "%s: size %d incorrect!" CRLF, name, memsz);
		} else {
			fprintf(stderr, "%s: size %d correct." CRLF, name, memsz);
		}

		if((mem = mmap(NULL, memsz, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0)) == MAP_FAILED) {
			fprintf(stderr, "%s/mmap: %s." CRLF, name, strerror(errno));
			goto skip;
		}
		bzero(mem, memsz);
		munmap(mem, memsz);
skip:
		close(fd);
	}

	return 0;
}

