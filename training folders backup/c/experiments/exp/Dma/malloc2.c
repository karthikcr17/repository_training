#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int *ptr = NULL;

	ptr =  malloc (20 * sizeof (int));
	printf ("%p\n", ptr);
	getchar ();
	free (ptr);
	return 0;
}
