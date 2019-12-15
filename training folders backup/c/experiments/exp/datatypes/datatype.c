#include <stdio.h>
#include <stdlib.h>
#if 0
int main ()
{
	float a = 10.12;
	int *ptr; 
	float *ptr1;

	ptr = (int *) &a;
	ptr1 = &a;

	printf ("%d\n", *ptr);
	showbits (*ptr);
	printf ("%f\n", *ptr1);
	showbits (*ptr1);
	return 0;
}
#endif

#if 1

int main ()
{
	double x = 8.125;
	long long int *ptr = (long long int *)&x;
	showbits(*ptr);
	printf ("\n");
	return 0;
}

#endif
