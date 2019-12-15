#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int *ptr = NULL;
	int i;

	ptr = malloc (12);

//	ptr[-1] = 0;		
	for (i = -2; i < 21; i++) { 
		printf ("%d is %d\n", i, *(ptr + i));
	}

	free (ptr);
	return 0;
}
