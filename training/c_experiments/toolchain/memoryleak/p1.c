#include<stdio.h>
#include<stdlib.h>
#define MAX -1 

int *p;

int main()
{
	
	printf("PID %d\n",getpid());

	p = malloc(10);

	*(p + MAX) = 12;

	free(p);

	return 0;
}

