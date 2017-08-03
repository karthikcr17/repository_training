#include<stdio.h>

int main()
{

	int a = 10;
	int b = 12;
	int d;

	int fun(int a, int b) {
		int c;

		c = a + b;

		return c;
	}

	d = fun(a,b);

	printf("%d\n",d);

	return 0;
}
