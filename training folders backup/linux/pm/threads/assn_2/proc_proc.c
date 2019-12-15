/*
 * Process creating a process *
 */

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/wait.h>
#include <stdlib.h>

int main( void )
{

	pid_t pid;

	//forking to create a child file
	if( 0 > ( pid = fork() ) ) {
		perror("fork failed");
		exit(1);
	} else if( pid > 0 ) {
		printf("I am the parent process\n");

		//specifing the parent to wait until  the childs execution
		wait( &pid );
	} else if( pid == 0 ) {
		printf(" I am child\n");
	}

	return 0;
}
