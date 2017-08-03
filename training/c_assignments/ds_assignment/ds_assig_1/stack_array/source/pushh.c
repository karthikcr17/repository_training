
/* this function push the elements into stack */

#include "header.h"

void push(int element)
{
	if(top >= limit)
		printf("stack is full\n");
	else {
		top++;
		stack[top] = element;
	}
}
