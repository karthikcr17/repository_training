#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	char *buff;
	int fd;
	


	printf("pid %d\n",getpid());
	

	getchar();
	if(execlp("exec1","lss",NULL) < 0) {
		perror("exec");
	}
	getchar();

	return 0;
}
