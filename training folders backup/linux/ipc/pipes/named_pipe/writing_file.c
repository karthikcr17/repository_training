/*

<<<<<<<<<  create a named pipe and write into the pipe >>>>>>>>>>

*/

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int fd;
    char * myfifo = "./myfifo";

    /* create the FIFO (named pipe) */
    if (mkfifo(myfifo, 0666)) {
		perror ("creating pipe failed");
		exit (EXIT_FAILURE);
	}

	fd = open(myfifo, O_WRONLY); /* writing to the FIFO */

  	if (fd > 0) {

	 	if (-1 == write(fd, "Message\n", sizeof("Message\n"))) {
			perror ("writnig into pipe failed\n");
			exit (EXIT_FAILURE);
		}

  	} else {
		perror ("opening pipe failed\n");
		exit (EXIT_FAILURE);
	}

	if (-1 ==  close(fd)) {
		perror ("closing file failed \n");
		exit (EXIT_FAILURE);
	}

    if (-1 == unlink(myfifo)) {
		perror ("deleting pipe failed\n");
		exit (EXIT_FAILURE);
	}

    return 0;
}
