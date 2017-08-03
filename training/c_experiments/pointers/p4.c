#include<stdio.h>

int main()
{

	int x = 5;
	int y = 10;

	int *a[2] = {&x, &y};
	
	printf("&x = %p \n",&x);

	int *(*p)[2];
	p = &a;

	printf("&a = %p \n",&a);
	printf("%d\n",*(**p + 1));

	return 0;
}
