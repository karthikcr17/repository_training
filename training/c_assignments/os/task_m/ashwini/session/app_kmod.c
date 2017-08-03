#include<stdio.h>
#include<fcntl.h>

int main()
{

	int fd;
	int fd1;
	int pid;
	printf("%d\n",getpid());


	fd = open("/dev/myChar", O_RDWR);
	if(fd < 0)
		perror("unable to open the device ");
	else
		printf("File opened successfully %d\n",fd);

	pid = fork();

	if(pid == 0) {
		ioctl(fd, getpid(), 10);
		exit(0);
	}
	else if(pid > 0) {
		ioctl(fd, getpid(), 10);
	}
	else
		printf("fork is failed\n");
	


	close(fd);

	return 0;
}
