/* application to check copy on write mechanism */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <stdlib.h>
#include <sys/wait.h>

unsigned long glob = 5;

int main( void )
{
	int fd;
	pid_t pid;


	fd = open("/dev/cow", O_RDWR);
	
	printf("pid from app%d\n", getpid());

	if(fd < 0) {
		perror("unable to open the device");
	} else {
		printf("file opened successfully %d \n", fd);
	}

	if (-1 == ioctl (fd, getpid(), &glob)) {
		perror ("ioctl failed\n");
		exit (1);
	}
	if (-1 == wait (NULL)) {
		perror ("ioctl failed\n");
		exit (1);
	}
	sleep(1);
	pid = fork();
	
	if(pid > 0) {	//parent process
/*		if(-1 == wait(NULL)) {
			perror("wait failed");
			exit(1);
		}
*/	
		printf("in parent %p\n", &glob);

		/* checking page frame address in parent before writing */
		
	
		if (-1 == ioctl(fd, getpid(), &glob)) {
			perror ("ioctl failed\n");
			exit (1);
		}

		if(-1 == wait(NULL)) {
			perror("wait failed");
			exit(1);
		}

	} else if(pid == 0) {
	
		printf("in child %p\n", &glob);

		/* checking page frame address in child before writing */
		if (-1 == ioctl(fd, getpid(), &glob)) {
			perror ("ioctl failed\n");
			exit (1);
		}

		sleep(2);

		glob = 24;

	printf("in child after modify %p\n", &glob);

		/* checking page frame address in child after writing */
	if (-1 == ioctl(fd, getpid(), &glob)) {
			perror ("icotl failed");
			exit (1);
		}
		
		exit(0);

	} else {
		perror("fork failed");
		exit(1);
	}

	close(fd);

	return 0;
}
