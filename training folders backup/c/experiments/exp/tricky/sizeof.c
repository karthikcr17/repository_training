#include <stdio.h>
#define my_sizeof(type) ((void *) (&type + 1) - (void *)(&type))

int main ()
{
	double a;

	printf ("%d", my_sizeof (6));

	return 0;
}

