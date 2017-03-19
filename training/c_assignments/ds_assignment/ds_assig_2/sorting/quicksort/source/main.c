#include"header.h"

int main()
{
	char quick_arr[MAX];
	int quick_array[MAX];
	
	char num[10];
	int n;
	int i;

	printf("enter the number of elements in an array:\n");
	if(NULL == (fgets(num, MAX, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	if(!(n = atoint(num))) {
		printf("check your input\n");
		exit(0);
	}
	
	printf("enter the elements in an array:\n");
	for(i = 0; i < n; i++) {
		if(NULL == (fgets(quick_arr, MAX, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}
		if(!(quick_array[i] = atoint(quick_arr))) {
			printf("check your input\n");
			exit(0);
		}
	}
	
	/* prints the unsorted elements*/	
	printf("elements before sorting:\n");
	for(i = 0 ;i < n; i++)
		printf("%d\t", quick_array[i]);

	quick_sort(quick_array,0, n-1);	//function call for quick sort

	printf("the sorted list :\n");
	for(i = 0; i<n ;i++)
		printf("%d\t", quick_array[i]);
	
	return 0;
}
