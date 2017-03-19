#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{

	pid_t pid;

	printf("PID %d\n",getpid());
	
	pid = fork();
	wait();

	if(pid > 0) {

		printf("parent process \n");
		printf("PID %d\n",getpid());
		getchar();
	}
	else if(pid == 0) {
		printf("child process \n");
		printf("PID %d\n",getpid());
		getchar();
	}
	else
		printf("fork is failed \n");

	return 0;
}
	
