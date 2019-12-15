#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main( void )
{
	int fd;
	int *ptr;

	ptr = malloc (5 * sizeof (int));
	ptr[0] = 12;
	fd = open("/dev/mychar", O_RDWR);

	if(fd < 0) {
		perror("unable to open the device");
	} else {
		printf("file opened successfully %d \n", fd);
	}

	printf ("in app pid is : %d \n", getpid());	
	
	ioctl (fd, getpid(),12);
	close(fd);
	getchar();
	return 0;
}
