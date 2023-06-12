#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <sys/random.h>

#include "kshram.h"

#define errquit(m) { perror(m); exit(-1); }

#define CRLF			"\n"

void handler(int s) {
	return;
}

int main(int argc, char *argv[]) {
	int fd, memsz;
	char *mem;
	char buf[64] = "M:";

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	getrandom(&fd, sizeof(fd), 0);
	srand(fd);

	if((fd = open("/dev/kshram0", O_RDWR)) < 0) errquit("open");
	if((memsz = ioctl(fd, KSHRAM_GETSIZE)) < 0) errquit("ioctl:getsize");
	if((mem = mmap(NULL, memsz, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0)) == MAP_FAILED)
		errquit("mmap");

	fprintf(stderr, "kshram msg check" CRLF);
	fprintf(stderr, "mem = %p, size = %x" CRLF, mem, memsz);
	if(argc > 1) pause();

	if(mem[0] == 'M') {
		write(1, "Curr Message: ", 14);
		write(1, mem, sizeof(buf));
		write(1, CRLF, 1);
	}

	for(int i = 2; i < sizeof(buf); i++) buf[i] = '0' + rand() % 64;
	memcpy(mem, buf, sizeof(buf));
	write(1, "Next Message: ", 14);
	write(1, buf, sizeof(buf));
	write(1, CRLF, 1);

	munmap(mem, memsz);
	close(fd);

	return 0;
}

