#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/random.h>
#include <sys/socket.h>
#include <sys/wait.h>

#include "kshram.h"

#define errquit(m) { perror(m); exit(-1); }
#define errquitn(m, n) { fprintf(stderr, "%s", n); perror(m); exit(-1); }

#define TEST_ROUNDS		100

#define CRLF			"\n"

typedef struct {
	int off;
	int size;
	char data[32];
}	msg_t;

void run_client(int id, int sock) {
	int fd, memsz;
	char ch, *mem, myname[64];
	msg_t msg;

	snprintf(myname, sizeof(myname), "client%d", id);
	fprintf(stderr, "%s: starts ... (%d)" CRLF, myname, getpid());

	if((fd = open("/dev/kshram0", O_RDWR)) < 0)        errquitn("open", myname);
	if((memsz = ioctl(fd, KSHRAM_GETSIZE, NULL)) < 0) errquitn("ioctl:getsize", myname);
	if((mem = mmap(NULL, memsz, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0)) == MAP_FAILED)
		errquitn("ioctl:mmap", myname);

	fprintf(stderr, "%s: mem = %p" CRLF, myname, mem);

	for(int i = 0; i < TEST_ROUNDS; i++) {
		if(id == 0) {
			int j;
			msg.size = sizeof(msg.data);
			msg.off = ((rand() & 0x7ffffff) % (memsz - sizeof(msg_t)));
			for(j = 0; j < sizeof(msg.data)-1; j++)
				msg.data[j] = '0' + rand()%64;
			msg.data[j] = 0;
			memcpy(mem+msg.off, msg.data, msg.size);
			if(write(sock, &msg, sizeof(msg)) != sizeof(msg)) errquitn("write", myname);
			if(read(sock, &ch, 1) != 1) errquitn("read", myname);
		} else {
			if(read(sock, &msg, sizeof(msg)) != sizeof(msg)) errquitn("read", myname);
			fprintf(stderr, "Round %02d: %s %s" CRLF, i, msg.data,
				memcmp(mem+msg.off, msg.data, msg.size) ? "FAILED" : "PASSED");
			if(write(sock, "1", 1) != 1) errquitn("write", myname);
		}
	}

	close(fd);

	return;
}

int main(int argc, char *argv[]) {
	int pid1, pid2, st, sv[2];

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	if(argc > 2) {
		run_client(argv[1][0] - '0', argv[2][0] - '0');
		return 0;
	}

	getrandom(&st, sizeof(st), 0);
	srand(st);

	if(socketpair(AF_UNIX, SOCK_STREAM, 0, sv) < 0) errquit("socketpair");

	if((pid1 = fork()) < 0) errquit("fork1");
	if(pid1 == 0) {
		char param[] = { sv[0] + '0', 0 };
		execl("/proc/self/exe", "check_fork", "0", param, NULL);
		exit(0);
	}

	if((pid2 = fork()) < 0) errquit("fork1");
	if(pid2 == 0) {
		char param[] = { sv[1] + '0', 0 };
		execl("/proc/self/exe", "check_fork", "1", param, NULL);
		exit(0);
	}

	waitpid(pid1, &st, 0);
	waitpid(pid2, &st, 0);

	printf("done." CRLF);

	return 0;
}

