/*
 * thread creating a process *
 */

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "error.h"
//function called by thread
void* print( void* ptr ) {

	pid_t pid;

	//spawning a process in the thread function

	if( 0 > ( pid = fork() ) ) {
		perror("fork failed");
		exit(1);
	} else if ( pid > 0 ) {
		printf("thread is executing\n");

		//waiting for the spawned process by calling wait system call
		if( 0 > wait( &pid ) ) {
			perror("wait faield");
			exit(1);
		}

	} else if ( pid == 0 ) {

		printf("child is executing\n");
	}

	return NULL;
}

int main( void )
{
	pthread_t thread;

	//creating the thread within the process
	status = pthread_create( &thread, NULL, print, NULL )

	if (status > 0) {
		err_abort (status, "thread creation failed\n");
	}
	//waiting for the spawned thread
	pthread_exit(NULL);

	return 0;
}
