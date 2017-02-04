#include <stdio.h>
#include <stdlib.h>

#if 0

int main(void)
{
	int arr[5] = {1, 2, 3};
	int *p;
	int (*ptr)[5];
	int pa[5];

	int arr2[3][4];

	printf("array of ponters size : %d \n", sizeof(pa));
	printf("pointer to an size : %d \n", sizeof(ptr));
	printf("2D array size : %d \n", sizeof(arr2));

	p = arr;

	ptr = &arr;


	return 0;
}

#endif

#if 0

int main(void)
{
	int *ptr;

	printf("Enter a number : \n");

	scanf("%d", ptr);

	printf("*ptr : %d \n", *ptr);	
	printf("ptr : %p \n", ptr);	

	return 0;
}

#endif

#if 1

int main(void)
{

	return 0;
}

#endif
