#include <stdio.h>

union sample
{
	int a :  5;
	int b : 10;
	int c :  5;
	int d : 21;
	int e;
}sam;

int main(void)
{
	sam.e = 111;

	printf("%ld\n", sizeof(sam));

	printf("%d\n" , sam.a);
	printf("%d\n" , sam.b);
	printf("%d\n" , sam.c);
	printf("%d\n" , sam.d);
	return 0;
}


