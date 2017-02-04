#include<stdio.h>

int main()
{
	float f = 12.234;

	int i;
	int j;

	int *p =(int *)&f;
	printf("\n");
	for(j=1;j>=0;j--) {
	for(i=31; i>=0; i--)
		printf("%d",(*(p + j) >> i) & 1);
	}
	printf("\n");
	return 0;
}
