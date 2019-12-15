#include <stdio.h>
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
	
	pid = fork();
	if (pid > 0) {
		printf ("i am in parent");
		ioctl (fd, getpid(),12);
	} else if (pid == 0) {
		printf ("i am in child");
		ioctl (fd, getpid(),12);
	} else {
		printf ("fork failed");
	}		

	close(fd);

	return 0;
}
