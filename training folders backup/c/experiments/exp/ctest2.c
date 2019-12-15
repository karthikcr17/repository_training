#include <stdio.h>
#if 1
int main (void)
{
	int a[10] = {1, 4, 3, 4, 5, 6, 7, 8, 9 , 0};
	int *ptr[10];
	int (*p)[10];

	printf ("%d\n%d\n%d\n", sizeof (a), sizeof (ptr), sizeof (p));
    ptr [1] = & a[1];
	printf("%d", *ptr[1]);
	return 0;


}
#endif

#if 0

int main (void)
{

	printf("%p",NULL);
	return 0;

}
#endif
