#include<stdio.h>

int main()
{

	int k;

	scanf("%d",&k);

	(((k & 1) && (printf("odd\n"))) || (printf("even\n")));

	return 0;
}
