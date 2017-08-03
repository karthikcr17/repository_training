#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>


void* heloo(void *arg)
{
	printf("hello \n");
	getchar();

    return NULL;
}
