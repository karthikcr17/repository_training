#include<stdio.h>

int main()
{
	double k = 123;

	k = k + 0.123;

	printf("%lf\n", k + (1 / 10));

	return 0;
}
