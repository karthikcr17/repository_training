#include<stdio.h>

void swap(int *, int *);

int main()
{
//	int *a = NULL;
//	int *b = NULL;

	int num1 = 5;
	int num2 = 7;

//	a = &num1;
//	b = &num2;

	swap(&num1, &num2);

	printf("the number num1 %d\n",num1);
	printf("the number num2 %d\n",num2);

	return 0;
}

void swap(int *num1, int *num2)
{

	int temp;  

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
