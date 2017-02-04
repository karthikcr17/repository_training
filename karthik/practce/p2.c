#include<stdio.h>
int fun(void);

int main()
{
	int p;
	p = fun();
	printf("%d\n",p);
	return 0;
}

int fun(void)
{
	char *p = "karthik";
	
	int x;
	x = 5;
	printf("%p\n",&x);

	return x;
}
