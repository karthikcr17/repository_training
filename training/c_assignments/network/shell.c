#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	char str[100];
	char command[10];
	char flag[10] = {0};

	pid = fork();
	wait(NULL);

	if(pid == 0) {
		fputc('$', stdout);
		fgets(str, 100, stdin);
		sscanf(str, "%s %[^\n]",command,flag);
		if(flag[0] != '\0')
		execlp(command, command, flag, NULL);
		else
		execlp(command, command, NULL);
	}
	else if(pid >  0) {

		execlp("./myshell", "myshell", NULL);
	}
	else 
		printf("vforkis failed \n");

	return 0;
}
