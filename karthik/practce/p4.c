#include<stdio.h>
int main()
{

	void *p;

	int a = 5;

	p = &a;

	printf("%d\n",*(int *)p);

	return 0;
}
