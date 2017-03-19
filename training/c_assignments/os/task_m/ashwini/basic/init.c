#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{

	pid_t pid;
	
	printf("pid %d\n",getpid());
	pid = fork();
	if(pid > 0){
	printf("parent process \n");
	printf("child pid %d\n",pid);
	}
	else if(pid == 0) {
	getchar();
	printf("child process \n");
	printf("child pid %d\n",getpid());
	}
	else
	printf("fork is failed \n");

	return 0;
}
	
