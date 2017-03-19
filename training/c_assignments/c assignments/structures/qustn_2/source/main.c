/* the union program */

#include "header.h"

union sample
{

	int a:5;
	int b:10;
	int c:5;
	int d:21;
	int e;
};

int main()
{

	union sample e1;
	
	e1.e = 10;

	printf("e1.a = %d\n",e1.a);
	printf("e1.b = %d\n",e1.b);
	printf("e1.c = %d\n",e1.c);
	printf("e1.d = %d\n",e1.d);
	printf("e1.e = %d\n",e1.e);

	return 0;
}



