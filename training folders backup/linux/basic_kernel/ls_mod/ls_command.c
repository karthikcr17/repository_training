#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main( void )
{
	int fd;
	pid_t pid;

	fd = open("/dev/myChar", O_RDWR);

	if(fd < 0) {
		perror("unable to open the device");
	} else {
		printf("file opened successfully %d \n", fd);
	}

	printf ("in app pid is : %d \n", getpid());	
	
	if (-1 == ioctl (fd, getpid(), 12)) {
		perror ("ioctl failed ");
		exit (0);
	}

	return 0;
}
