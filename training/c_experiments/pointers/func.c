#include<stdio.h>

void func(int *a, int *b, int **p);

int main()
{

	int num1 = 10;
	int num2 = 20;

	int *p = NULL;
	func(&num1, &num2,p);

	printf("addition of 2 numbers %d\n",*p);

	p--;

	printf("sub of 2 numbers %d\n",*p);

	p--;

	printf("multiplcation of 2 numbers %d\n",*p);

	return 0;
}

void func(int *a, int *b, int **p)
{

	int add;
	int sub;
	int mul;

	add = *a + *b;
	
	*p = &add;

	p++;

	sub = *a - *b;

	*p = &sub;

	p++;

	mul = *a * *b;

	*p = &mul;

}


