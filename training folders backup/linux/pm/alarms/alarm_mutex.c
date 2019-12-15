/*
 *
 **** Asynchrounous alarm using thread creation &
 **** locking the resource using mitex mechanism 
 *
 */
#include "alarm_queue.h"

typedef struct {
	pthread_mutex_t resource_lock;  /* Protects access to value */
	pthread_cond_t cond;
	struct queue *root;     		/* Access protected by mutex */
} my_queue_head;

my_queue_head head = {
	.resource_lock = PTHREAD_MUTEX_INITIALIZER,    /* mutex lock for the queue */
	.cond =  PTHREAD_COND_INITIALIZER,			   /* condtional variable  */
	.root = NULL								   /* root of the queue */
};

int main( void )
{
	char *line = NULL;
	char mes[64]; 			//to store 
	time_t sec;  			//to store number of seconds to store
	int status ; 			//status of thread function
	pthread_t th_id = 0; 	//thread id variable

	status = pthread_create (&th_id, NULL, alarm_thread, NULL); // creating serivce thread

	if (status > 0) {
		err_abort (status, "thread creation failed");
	}

	while(1) {

		printf("Alarm>");

		if (NULL == (line =  (char *) malloc (MAX * sizeof (char)))) {
			perror ("malloc failed");
			exit (1);
		}

		if(fgets(line, MAX, stdin) == NULL) {
			perror ("getting input failed in TGL")
				exit(1); 				//getting string from the stdin
		}

		if(strlen(line) <= 1) {
			continue; // if the input is less than 2 bytes again prompts for input
		}

		if(sscanf(line, "%u %64[^\n ]", (unsigned int*)&sec, mes) < 2 ) { //getting seconds and message in seperate variables
			fprintf(stderr, "Bad command \n");
			continue;
		}

		/* acquring the lock for resource */
		status = pthread_mutex_lock(&head.resource_lock);

		if (status > 0) {
			err_abort (status, "locking in TGL failed\n");
		}

		enqueue (sec, mes);	/* inserting into queue */

		/* relasing the lock */
		status = pthread_mutex_unlock(&head.resource_lock);

		if (status > 0) {
			err_abort (status, "unlocking in TGL failed\n");
		}
	}	//end of while loop
	return 0;
}
/* thread for servicing the given request */
void* alarm_thread (void * arg)
{	
	int status;

	while (1) {
		while (head.root == NULL) {
			sleep(1);
		}
		/* locking the resource for servicing */
		status = pthread_mutex_lock(&head.resource_lock);

		if (status > 0) {
			err_abort (status, "locking in Thread failed\n");
		}


		/* servicing the request by slepping for given seconds*/
		sleep ((head.root -> link -> seconds) - time(NULL));	

		printf ("%d", head.root -> link -> print_sec);
		printf (" (%s)\n", head.root -> link -> message);

		/* after servicing removing the request from the queue*/
		dequeue();
		/* unlocking the resource */
		status = pthread_mutex_unlock(&head.resource_lock);

		if (status > 0) {
			err_abort (status, "unlocking in thread failed\n");
		}
	}
}

void enqueue (unsigned sec, char * mes) {

	struct queue* temp = NULL;
	struct queue* p = NULL;

	if (NULL == ((temp) = (struct queue *) malloc (sizeof (struct queue)))) {
		perror ("malloc failed in enqueueion");
		exit (1);
	}

	temp -> print_sec = sec;
	temp -> seconds = sec + time (NULL);
	temp -> message = mes;

	/* if queue is insert at first node */
	if (NULL == head.root) {
		head.root = temp;
		head.root -> link = head.root;
		return; 
	}

	/* placing the given requests inascending order */
	if (head.root -> seconds > temp -> seconds) {
		temp -> link = head.root -> link;
		head.root -> link = temp;
		head.root = temp;
		temp = NULL;
		return;
	}
	/* if given request is largest among all*/
	temp -> link = head.root -> link;
	head.root -> link = temp;
	head.root = temp;
}

void dequeue () {

	struct queue* temp = NULL;

	temp = head.root -> link;

	if (temp == head.root) {
		free (temp);
		head.root = NULL;
		return ;
	}

	head.root -> link = temp -> link;
	free(temp);
	temp = NULL;

}
