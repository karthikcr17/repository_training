#include <stdio.h>

static int x = 5;

void main()

{
	printf("%d", x);

	int x = 9;
	printf("%d", x);

	{
	printf("%d", x);

		x = 4;
	printf("%d", x);

	}
	printf("%d", x);


}
