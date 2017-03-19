#include<stdio.h>

int main()
{
	int b = 10;
	b = 50;
	{
		b = 20;
	}

	printf("%d",b);
	return 0;
}
