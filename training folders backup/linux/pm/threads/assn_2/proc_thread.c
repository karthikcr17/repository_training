/* 
 * process creating a thread
 */


#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include "error.h"

//function called by thread
void* print( void* ptr ) {

	int *b = (int*) ptr;

	(*b)++;
	printf("the value of b is: %d\n",*b);


	if( 0 > (write(1,"i have been executed by pthread\n",33))) {
		perror("write failed");
	}
	return NULL;
}

int main( void )
{
	int status;
	pthread_t thread;
	int a = 1;

	//creation of thread using the pthread_create
	status = pthread_create( &thread, NULL, print, &a )
	if (status > 0) {
		err_abort (status, "thread creation failed\n");
	}
	return 0;
}
