#include<stdio.h>
#include<string.h>

int fun(void);

int main()
{
	int a = 10;

	fun();

	printf("add %d\n",a);
	printf("add %d\n",a);

	return 0;
}
int fun(void)
{
	int *p;
	int a;
	p = &a;

	p++;
	p++;
	p++;

	*p = (*p + 24);

	return (10 + 10);

}
