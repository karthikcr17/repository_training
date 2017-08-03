#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	pid_t pid;


	pid = vfork();


	if(pid > 0) {
		printf("parent pid %d\n",getpid());
		getchar();
		getchar();
		exit(1);
		}
	else if(pid == 0) {
		printf("child pid %d\n",getpid());
		getchar();
		getchar();
		}
	else 
		printf("fork is failed\n");

	return 0;
}
