#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);

	(((num & 1) && (printf("odd\n"))) || printf("even\n"));

	return 0;
}

	
