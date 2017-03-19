#include<stdio.h>

int main()
{
	int a[5]; // it is array of name a size is 5 integers
	int i; 
	int sum = 0; // it stores the sum of elements of array

	printf("enter the array elements\n");
	for(i=0; i<5; i++) 
			scanf("%d",&a[i]);

	
 	for(i=0; i<5; i++)
			sum = sum + a[i];


	printf("sum of the array elements is %d\n",sum);
}
