#include<stdio.h>
void func(int *,int *,int *);

int main()
{

	int x = 10;
	int y = 10;

	int *p;

	*p = '\0';

	func(&x, &y, p);

	printf("%d\n",*(p++));
	printf("%d\n",*(p++));
	printf("%d\n",*(p++));
	
	return 0;
}

void func(int *p,int *q,int *r)
{

	*r = *p + *q;
	r++;
	
	*r = *p - *q;

	r++;

	*r = *p * *q;

	
	
}



