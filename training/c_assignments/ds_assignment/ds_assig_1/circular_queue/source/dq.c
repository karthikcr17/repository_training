
/* this function inserting elements into circular queue */


#include "header.h"

void dequeue(int queue[])
{
	int element;

	if((count == 0 )) /* checking queue is empty or not */
	{
		printf("queue empty\n");
	}
	else
	{
		count--;
		f =f%limit;
		element = queue[f];
		printf("enqued:%d\n",element);
		f++;
	}
}
