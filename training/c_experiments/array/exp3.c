#include<stdio.h>

int main()
{
	int n; // it stores the number of elements you want

	printf("enter the number of elements you want\n");
	scanf("%d",&n);	

	int a[n]; /* it is array name a with size of n elements and 
                       it stores the fibanac series upto n elements */
	a[0] = 0; /* fibanac series starts from 0 and 1
                              you can store that value in n1 and n2 */
	a[1] = 1;


	int i;

	for(i=0; i<n; i++) 
			a[i + 2] = a[i] + a[i + 1];
			
	printf("upto %d elements the fibanac series \n",n);

	for(i=0; i<n; i++)
		printf("%d ",a[i]);

	printf("\n");
	
	return 0;
}
