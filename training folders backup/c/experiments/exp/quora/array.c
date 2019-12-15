#include<stdio.h>

int main (void)
{
	int arr[] = {1,3,2,5,4,10,2,5};
	int i;
	int max;

	max = arr[0];
	printf ("%d\n", sizeof(arr));
	for (i = 1; i < (sizeof (arr)/sizeof (arr[0])); i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf ("maximum number is %d\n", max);

	return 0;

}
