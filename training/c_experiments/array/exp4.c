#include<stdio.h>

int main()
{
	int n; // it stores number of elemnts
	
	printf("enter the number of elements\n");
	scanf("%d",&n);
	
	int a[n]; // it is array of name a size is 5 integers
	int i; 
	int sum = 0; // it stores the sum of elements of array

	printf("enter the array elements\n");
	for(i=0; i<n; i++) 
			scanf("%d",&a[i]);

	
 	for(i=0; i<n; i++)
			sum = sum + a[i];


	printf("sum of the array elements is %d\n",sum);

	return 0;
}
