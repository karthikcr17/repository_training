#include<stdio.h>
int main()
{

	int a = 0xaaabbbcc;
	char *ch = &a;

	printf("%lx\n",*ch);

	return 0;
}
