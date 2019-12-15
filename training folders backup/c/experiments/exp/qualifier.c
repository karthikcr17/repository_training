#include /*hello*/<stdio.h>

#if 0
const int a = 24;
int main ()
{

	a ++;

	printf("%d",a);

	return 0;
}

#endif


#if 0
int b;

int main ()
{
	b = 5;
	while (b == 5) {
		;
	}
	return 0;
}
#endif

#if 1

int main ()
{
	int a =10;
	int *ptr = &a;
	*ptr = 15;

	return 0;
}

#endif
