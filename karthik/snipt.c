#include<stdio.h>
#include<stdlib.h>

int main()
{

	int *p = (int *)malloc(20);
	p = NULL;

	int x;
	printf("%p\n",&x);

	{
		int x = 6;
		p = &x;
	printf("%p\n",&x);
	}
	x = 12;
	printf("%d\n",*p);
	printf("%p\n",&x);
	printf("%d\n",*p);

	return 0;
}
