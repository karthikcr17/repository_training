#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>



void handler() {
	printf("handle signal\n");
//  return;   it will goes to infinite loop
	exit(1);
}

int main()
{
	
	int *p = 0;
//  *p = 10 there it will excecute default action
	signal(11, &handler);
	*p = 10;	



	return 0;
}
