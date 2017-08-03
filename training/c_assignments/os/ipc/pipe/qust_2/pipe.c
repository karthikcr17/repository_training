#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(void)
{
	int pipefd[2]; //declaration
	pid_t cpid;


	if (pipe(pipefd) == -1) {
		perror("pipe");
		exit(EXIT_FAILURE);
	}

	cpid = fork();

	if(cpid > 0) {
		

		close(pi 

		exit(EXIT_SUCCESS);
	}
	
	return 0;

}


