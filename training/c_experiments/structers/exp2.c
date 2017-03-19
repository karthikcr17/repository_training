#include<stdio.h>

struct batch
{
	char s;
	int x;
};

int main()
{
	struct batch a;
	char *p;

	p = (char *)&a.s;

	a.s = '9';
	a.x = 12;

	printf("%d\n",sizeof(struct batch));
	printf("%x\n", *(p + 0));
	return 0;
}

