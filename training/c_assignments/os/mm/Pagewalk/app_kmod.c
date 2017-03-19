#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int fun(int);

int main()
{
	int *ptr;
	int *k = NULL;
	char str[100];
	static int s = 10;

	int fd;
	printf("%d\n",getpid());
	fd = open("/dev/myChar",O_RDWR);

	if(fd < 0)
		perror("unable to open the device ");
	else
		printf("File opened successfully %d\n",fd);

	ptr = (int *)malloc(sizeof(int) * 1024);

	
//	scanf("%x",&s);
//	k = (int *)s;
//	k = k + 3;
	printf("after static %x\n",s);
	ioctl(fd, getpid(), fun);


	printf("after the ioctl %d\n",fun(2));
	
	ioctl(fd, getpid(), fun);
	printf("after static %p\n",k);

	close(fd);

	return 0;
}


