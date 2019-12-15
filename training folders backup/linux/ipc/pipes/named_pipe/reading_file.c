/*

<<<<<<<<<< Reading from named pipe into buffer >>>>>>>>>>

*/


#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_BUF 1024

int main()
{
	int fd;
	char * myfifo = "./myfifo";
	char buf[MAX_BUF] = {'\0'};

	/* open, read, and display the message from the FIFO */
	fd = open(myfifo, O_RDONLY);

	if (fd > 0) {

		if (-1 == read(fd, buf, MAX_BUF)) {		/* reading from pipe to buffer*/
			perror ("reading from pipe failed\n");	
			exit (EXIT_FAILURE);
		}
		printf("Received: %s\n", buf);

	} else {
		perror ("opening file failed\n");	
		exit (EXIT_FAILURE);
	}

	if (-1 == close(fd)) {
		perror ("closing pipe failed\n");
		exit (EXIT_FAILURE);
	}

	return 0;
}
