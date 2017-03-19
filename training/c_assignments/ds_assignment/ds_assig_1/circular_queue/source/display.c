
/* displaying data into the queue */

#include "header.h"

void display(int queue[])
{
	int x= f;         /* storing front data into x variable */
	int copy = count; /* storing count into copy variable */
	int element;

	if((count==0 ))
	{
		printf("empty\n");
	}
	else
	{ 
		printf("elements are:\n");
		while(copy){
			copy--;
			x = x%limit;
			element = queue[x];
			printf("queue[%d]:%d\n",x,element);
			x++;}
	}
}
