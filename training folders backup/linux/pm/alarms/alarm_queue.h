
#ifndef ALARM_H
#define ALARM_H

#include <pthread.h>
#include "errors.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 120
struct queue {
	char message[64];
	time_t seconds;
	int print_sec;
	struct queue* link;
};

void enqueue ( char *);
void dequeue ();
void* alarm_thread (void *);

#endif
