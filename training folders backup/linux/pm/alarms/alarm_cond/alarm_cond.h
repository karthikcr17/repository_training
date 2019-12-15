#ifndef ALARM_COND
#define ALARM_COND
#include <pthread.h>
#include "errors.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 120

typedef struct list {
	char message[64];
	time_t seconds;
	int print_sec;
	struct list* link;
} queue;

void enqueue (char *);
void dequeue ();
void* alarm_thread (void *);

typedef struct secure{
	pthread_mutex_t resource_lock;  /* Protects access to value */
	pthread_cond_t cond1;			/* condtion1 to interrupt wait */
	pthread_cond_t cond2;
	queue *root;     		/* Access protected by mutex */
} my_queue_head;

#endif
