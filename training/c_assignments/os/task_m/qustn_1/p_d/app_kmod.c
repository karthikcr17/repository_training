#include<stdio.h>
#include<fcntl.h>

int main()
{

	int fd;
	int fd1;
	int pid;
	printf("%d\n",getpid());
	fd1 = open("./kar.txt",O_RDWR|O_CREAT);
	fd = open("/dev/myChar",O_RDWR);

	if(fd < 0)
		perror("unable to open the device ");
	else
		printf("File opened successfully %d\n",fd);


	printf("fd %d fd1 %d \n",fd,fd1);
	pid = fork();
	if(pid == 0)
	{
	write(fd1,"global",6);
	ioctl(fd, getpid(), 10);
	close(fd1);
	}
	else
	{
	write(fd1,"edge",4);
	ioctl(fd, getpid(), 10);
	close(fd1);
	}

	close(fd);
	getchar();

	return 0;
}
