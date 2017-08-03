#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{

	pid_t pid;
	getchar();
	
	printf("pid %d\n",getpid());
	printf("\n");
	pid = vfork();
//	wait(NULL);
	if(pid > 0){
	printf("child pid %d\n",pid);
	getchar();
	}
	else if(pid == 0) {
	printf("child process \n");
	printf("child pid %d\n",getpid());
	getchar();
	exit(0);
//	execlp("sh","./myshell",NULL);
	}
	else
	printf("pid %d\n",getpid());

	return 0;
}
	
