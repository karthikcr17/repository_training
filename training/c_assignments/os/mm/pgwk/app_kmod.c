#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	int *ptr;
	int fd;
	static int var = 10;
	printf("%d\n",getpid());
	fd = open("/dev/myChar",O_RDWR);

	if(fd < 0)
		perror("unable to open the device ");
	else
		printf("File opened successfully %d\n",fd);

	ptr = (int *)malloc(sizeof(int) * 1024);

	printf("%d\n", var);

	ioctl(fd, getpid(), &var);

	printf("%d\n", var);

	close(fd);
	getchar();

	return 0;
}
