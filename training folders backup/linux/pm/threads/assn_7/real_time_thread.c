/*

 * a real time thread with a priority of 86 and the scheduling policy as FIFO

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

	/* intializing attributes to default */
	if (status = pthread_attr_init (&attr)) {
		err_abort (status, "intialization of attributes failed\n");
	}

	param.sched_priority = 86;	/* priority to 86 */

	/* changing scheduling policy to FIFO */
	if (status = pthread_attr_setschedpolicy (&attr, SCHED_FIFO)) {
		err_abort (status, "setting scheduler policy failed\n");
	}

	/* setting schduler parameters */
	if (status = pthread_attr_setschedparam (&attr, &param)) {
		err_abort (status, "setting parameters for scheduler\n");
	}
	/* creating thread */
	if (status = pthread_create (&th_id, &attr, thread_func, NULL)) {
		err_abort (status, "creation of thread failed\n");
	}

	pthread_exit (NULL);

	/* destroying attributes of thread*/
	if (status = pthread_attr_destroy (&attr)) {
		err_abort (status, "destroying attributes of thread failed\n");
	}

	return 0;
}

void *thread_func (void *ptr)
{
	int policy;					/* scheduler policy variable*/
	struct sched_param param;	/* scheduler parametrs variable*/

	/* getting scheduler policy */
	if (status = pthread_attr_getschedpolicy (&attr, &policy)) {
		err_abort (status, "getting scheduler policy failed\n");
	}
	
	/* getting the parameters of schduler in thread*/
	if (status = pthread_attr_getschedparam (&attr, &param)) {
		err_abort (status, "getting parameters of scheduler failed\n");
	}

	printf ("thread scheduling policy is %d\n", policy);
	printf ("thread priority is %d\n", param.sched_priority);

	exit (EXIT_SUCCESS);
}
