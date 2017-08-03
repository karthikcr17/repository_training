#include<stdio.h>
#include<fcntl.h>

int main()
{

	int fd;
	
	fd = open("/dev/myChar",O_RDWR);

	if(fd < 0)
		perror("unable to open the device ");
	else
		printf("File opened successfully %d\n",fd);

	ioctl(fd, getpid(), 10);

	close(fd);

	return 0;
}
