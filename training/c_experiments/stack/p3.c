#include<stdio.h>
void fun(void);
int main()
{
	int i = 10;

	fun();
	printf("%d\n",i);
	printf("%d\n",i);

	return 0;
}

void fun(void)
{
	int j;
	int *p = &j;
//	while(*p != 16)
//		p++;
	p = p - 3;
	*p = 20;
		
//	printf("%x\n",*(p + 3));
//	*(p + 3) = *(p + 3) + 10;
}
