#include <stdio.h>

int main ()
{

	int a = 1;
	int b = 2;
	int *ptr[2];

	ptr[0] = &a;
	ptr[1] = &b;

	printf ("%p\n", ptr[0]);
	printf("%p\n", ptr[1]);

	printf ("%d\n", *ptr[0]);
	printf ("%d\n", *ptr[1]);
	return 0;


}
