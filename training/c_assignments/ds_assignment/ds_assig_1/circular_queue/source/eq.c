
/*this function is deelting the data into queue */

#include "header.h"

void enqueue(int element)
{
	if(count >= limit) /* checking queue is full or not */
	{
		printf("queue full\n");
	}
	else
	{	
		count++;
		r++;
		r = r % limit;
		queue[r] = element;
	}
}


