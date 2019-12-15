#include <stdio.h>

void * mymalloc (unsigned);
void myfree (void *);
int main (void)
{
	int * ptr = NULL;
	int *ptr1 = NULL;

	ptr  = (int *) mymalloc (10 * sizeof (int));

	ptr[0] = 1;
	ptr [1] = 2;
	ptr [2] = 3;
	printf ("%d\n", ptr[0]);
	printf ("%d\n", ptr[1]);
	printf ("%d\n", ptr[2]);
	printf ("%d\n", ptr[-1]);
	ptr1 = (int *) mymalloc (1024 * sizeof (int));

	printf ("%p\n", sbrk(0));
	myfree (ptr);
	return 0;


}
