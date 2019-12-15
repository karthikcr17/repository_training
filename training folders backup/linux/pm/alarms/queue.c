#include "alarm_queue.h"
extern struct queue* root;

void enqueue (unsigned sec, char * mes) {

	struct queue* temp = NULL;
	struct queue* p = NULL;

	if (NULL == ((temp) = (struct queue *) malloc (sizeof (struct queue)))) {
		perror ("malloc failed in enqueue");
		exit (1);
	}
	
	temp -> print_sec = sec;
	temp -> seconds = sec + time (NULL);
	temp -> message = mes;

	if (NULL == root) {
		root = temp;
		root -> link = root;
		return; 
	}

//	for (p = root; (temp -> print_sec > p -> link -> print_sec) && (p -> link != root); p = p -> link);

	temp -> link = root -> link;
		root = temp;

}

void dequeue () {

	struct queue* temp = NULL;

	temp = root -> link;

	if (temp == root) {
//		free (temp);
		root = NULL;
		return ;
	} else {

	root -> link = temp -> link;
	free(temp);
	temp = NULL;
	}
}
