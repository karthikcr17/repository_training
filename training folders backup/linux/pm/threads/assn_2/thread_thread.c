/*
 * thread creating a thread 
 */

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "error.h"

void * th_print( void * th_ptr )
{

	printf("I am second thread spawned by the thread\n");

	return NULL;
}

void* print( void* ptr )	//thread created by thread group leader
{
	int status;

	pthread_t th_thread;

	status = pthread_create( &th_thread, NULL, th_print, NULL )                                                  
	if (status > 0) {
		err_abort (status, "thread creation failed in the thread");
	}

	pthread_exit( NULL );

	return NULL;
}

int main( void )	//main thread group leader
{
	int status;
	pthread_t thread;

	status = pthread_create( &thread, NULL, print, NULL )
	if (status > 0) {
		err_abort (status, "thread creation failed in TGL\n");
	}
	
	pthread_exit(NULL);

	return 0;
}
