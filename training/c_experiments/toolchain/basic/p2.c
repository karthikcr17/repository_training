#include<stdio.h>
int main()
{

	volatile int a = 100;
	int b = 10;
	volatile int c;

	a = 200;
	a = 300;

	c = a + b;
	return 0;
}
