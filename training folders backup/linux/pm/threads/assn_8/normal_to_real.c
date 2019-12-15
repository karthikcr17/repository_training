/*

 * creating a normal thread and configure the normal thread to a real time 
 * thread in the function executed in the thread context. 
 * Real time attributes to be configured are scheduling policy to RR
 * and priority to 68.

 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "errors.h"

void* thread_func (void *);	/*thread function declaration */

pthread_attr_t attr;		/* variable to store attributes of thread*/
int status;

int main (void) 
{
	struct sched_param param;	/* parameters of scheduler */
	pthread_t th_id;
	int policy;

	/* intializing attributes to default */
	if (status = pthread_attr_init (&attr)) {
		err_abort (status, "intialization of attributes failed\n");
	}

	/* creating thread */
	if (status = pthread_create (&th_id, &attr, thread_func, NULL)) {
		err_abort (status, "creation of thread failed\n");
	}

	sleep (1);
	/* getting schduler policy after changing in thread */

	if (status = pthread_attr_getschedpolicy (&attr, &policy)) {
		err_abort (status, "setting scheduler policy failed\n");
	}

	/* getting schduler parameters after changing in thread */

	if (status = pthread_attr_getschedparam (&attr, &param)) {
		err_abort (status, "setting parameters for scheduler\n");
	}


	printf ("thread scheduling policy after modifying in thread is %d\n", policy);
	printf ("thread priority is after changing in thread %d\n", param.sched_priority);


	pthread_exit (NULL);
	/* destroying attributes of thread*/
	if (status = pthread_attr_destroy (&attr)) {
		err_abort (status, "destroying attributes of thread failed\n");
	}

	return 0;
}

void *thread_func (void *ptr)
{
	struct sched_param param;	/* scheduler parametrs variable*/


	param.sched_priority = 68;	/* priority to 68 */

	/* changing scheduling policy to Round Robin */
	if (status = pthread_attr_setschedpolicy (&attr, SCHED_RR)) {
		err_abort (status, "setting scheduler policy failed\n");
	}

	/* setting schduler parameters */
	if (status = pthread_attr_setschedparam (&attr, &param)) {
		err_abort (status, "setting parameters for scheduler\n");
	}
	sleep(1);
	exit (EXIT_SUCCESS);
}
