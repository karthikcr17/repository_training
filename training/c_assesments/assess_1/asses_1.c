#include<stdio.h>

int num; /* this veriable stores the given number */
char a[50]; /* array of size 50 elements it can stored the given value */

#if 1

// this program checks number is power of 2 or not

int main()
{

	printf("enter the number:\n");
	scanf("%s",a);

	num = valid(a);
	
	if(num == 0)
		printf("\nenter the correct value\n\n");
	else {

	if(num & (num - 1))  {    /* number and with (number - 1) it is zero goes to
				  if part it is not zero goes else part*/
		printf("\nthe number is not power of 2\n\n");
	}

	else
		printf("\nthe number is a power of 2\n\n");
	}

	return 0;


}

#endif

#if 0 

int N = sizeof(void*) * 8;

// this program counts the number of set bits in number

int main()
{

	int i;
	int count = 0; // it stores the number of 1's in a given number

	printf("enter the number \n");
	scanf("%s",a);

	num = valid(a);
	
	if(num == 0)
		printf("\nenter the correct value\n\n");
	else {	
	
	printf("the number is:\n");
	show(num);

	for(i=0; i<N; i++) {   /* shift number by i times and with 1 it is 1 
				  increment count */
		if((num >> i) & 1)
			count = count + 1;
	}
	printf("\nthe number of set bits is %d\n\n",count);
	}

	return 0;


}		
#endif

#if 0

// this program multiplying the given number by 4 

int main()
{

	printf("enter the number :\n");
	scanf("%s",a);


	num = valid(a);
	
	if(num == 0)
		printf("enter the correct value\n\n");
	else {

	printf("\nthe number is :\n");

	show(num);

	num = num << 2; /* number is left shifted by 2 times */

	printf("\nafter multiplying number by 4 the number is: %d\n\n",num);
	}

	return 0;
}
#endif
















