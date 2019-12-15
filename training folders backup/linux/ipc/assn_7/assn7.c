

#include <pthread.h>
#include "errors.h"

void* alarm_thread (void *); //thread alarm function

int flag = 0;

int main( void )
{
	int status;
	pthread_t th_id;

	status = pthread_create (&th_id, NULL, alarm_thread, NULL); // creating threads

		if (status > 0) {
			err_abort (status, "thread creation failed\n");
		}

	sleep(1);
	flag = 5;
	pthread_exit (NULL);

	return 0;
}

void* alarm_thread (void *line)
{
	while (1) {
		if (flag == 5) {
			break;
		}
	}
	printf ("flag value is %d \n", flag);

}

