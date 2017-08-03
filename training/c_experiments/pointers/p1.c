#include<stdio.h>

int main()
{

	int *p;
	int **q;

	int a = 5;

	p = &a;
	q = &p;	

	printf("the value of p %p\n",p);

	printf("the value of *p= %d\n",*p);

	printf("the value of a= %d\n",a);

	printf("the value of &a= %p\n",&a);

	printf("the value of &p= %p\n",&p);

	printf("the value of q = %p\n",q);

	printf("the value of *q = %p\n",*q);

	printf("the value of **q = %d\n",**q);

	return 0;

}


