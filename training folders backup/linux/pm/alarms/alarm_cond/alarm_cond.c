/*
 *
 **** Asynchrounous alarm using thread creation using mutex mechanism **********
 **** & condtional wait ***
 *	in this we are avoiding the problems in pthread_mutex ****
 */
#include "alarm_cond.h"

queue* root = NULL;
my_queue_head head = { 
	.resource_lock = PTHREAD_MUTEX_INITIALIZER, 
	.cond1 = PTHREAD_COND_INITIALIZER, 
	.cond2 = PTHREAD_COND_INITIALIZER, 
	.root = NULL
};


int main( void )
{
	time_t sec;  			//to store number of seconds to store
	int status ; 			//status of thread function
	pthread_t th_id;	 	//thread id variable
	char line[120];

	status = pthread_create (&th_id, NULL, &alarm_thread, NULL); // creating serivce thread

	if (status > 0) {
		err_abort (status, "thread creation failed");
	}

	while(1) {

		printf("Alarm>");

		if(fgets(line, MAX, stdin) == NULL) {
			perror ("getting input failed in TGL");
			exit(1); 				//getting string from the stdin
		}

		if(strlen(line) <= 1) {
			continue;	// if the input is less than 2 bytes again prompts for input
		} else {

			status = pthread_mutex_lock(&(head.resource_lock));

			if (status != 0) {
				err_abort (status, "locking in TGL failed\n");
			}

			enqueue (line);	/* inserting into the queue */ 

			status = pthread_mutex_unlock(&(head.resource_lock));

			if (status != 0) {
				err_abort (status, "unlocking in TGL failed\n");
			}
		}
	} //	end of while loop
}

void* alarm_thread (void * arg)
{
	struct timespec* abs = NULL;
	int status;

	if (NULL == (abs = (struct timespec*) malloc (sizeof (struct timespec)))) {
		perror ("malloc failed in timespec");
		exit (1);
	}

	while (1) {
		/* (NULL == (abs = (struct timespec*) malloc (sizeof (struct timespec)))) {
		   perror ("malloc failed in timespec");
		 */
		status = pthread_mutex_lock(&(head.resource_lock));

		if (status > 0) {
			err_abort (status, "locking in TGL failed\n");
		}

		if (root == NULL) {

			status = pthread_cond_wait (&(head.cond1), &(head.resource_lock)); 
		}

		abs -> tv_sec = root -> seconds; 	
		abs -> tv_nsec = 0;

		status = pthread_cond_timedwait(&(head.cond2), &(head.resource_lock), abs);

		if (status == ETIMEDOUT) {

			printf ("%d (%s)\n", root -> print_sec, root -> message);

			dequeue();
		}
		status = pthread_mutex_unlock(&(head.resource_lock));

		if (status > 0) {
			err_abort (status, "mutex lock failed in thread");
		}				
	}
	}

	void enqueue (char * line) {

		int status;
		queue* temp = NULL;
		queue* present = NULL;
		queue* prev = NULL;

		if (NULL == ((temp) = (queue *) malloc (sizeof (queue)))) {
			perror ("malloc failed in enqueueion");
			exit (1);
		}
		if(sscanf(line, "%d %64[^\n]", &(temp -> print_sec), (temp -> message)) < 2 ) { //getting seconds and message in seperate variables
			fprintf(stderr, "Bad command \n");

		} else {
			temp -> seconds = temp -> print_sec + time (NULL);

			if (NULL == root) {
				root = temp;
				temp -> link = NULL;
				pthread_cond_signal (&(head.cond1));

			} else {

				present = root;
				while ((present != NULL) && (present -> seconds) < (temp -> seconds)) {
					prev = present;
					present = present -> link;
				}
				if (present == NULL) {
					prev -> link = temp;
					temp -> link = NULL;
				} else if (prev == NULL) {
					temp -> link = root;
					root = temp;
					pthread_cond_signal(&(head.cond2));
				} else {
					temp -> link = prev -> link;
					prev -> link = temp;                                              
				}         
			}
		}
	}
	void dequeue () {

		queue* t = NULL;

		t = root;
		root = root -> link;
		free(t);
		t = NULL;

	}
