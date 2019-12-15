/*
 *
 **** Asynchrounous alaram using thread creation  **********
 *
 *
 */

#include <pthread.h>
#include "errors.h"

void* alarm_thread (void *); //thread alarm function

int main( void )
{
	char line[120];
	int status ; //status of thread function
	pthread_t th_id; //thread id variable

	while(1) {
		printf("Alarm>");
		if(fgets(line, sizeof(line), stdin) == NULL) exit(0); //getting string from the stdin

		if(strlen(line) <= 1) continue; // if the input is less than 2 bytes again prompts for input

		status = pthread_create (&th_id, NULL, alarm_thread, line); // creating threads

		if (status > 0) {
			err_abort (status, "thread creation failed");
		}
	}
	pthread_exit (NULL); //calling thread waits till all the child process completes there execution
}

void* alarm_thread (void *line)
{
	char message [64];
	int seconds;


	if(sscanf(line, "%d %64[^\n]", &seconds, message) < 2) { //getting seconds and message in seperate variables
		fprintf(stderr, "Bad command \n");
	} else {
		sleep(seconds); // sleeps forgiven number of seconds
		printf("(%d) %s \n", seconds, message);
		printf ("thread id = %d\n", pthread_self());
	}
}

