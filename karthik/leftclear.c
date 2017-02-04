#include<stdio.h>

int main()
{
	int num, i, p, n;
	scanf("%d",&num);
	for(i=31; i>=0; i--)
		printf("%d",(num >> i) & 1);
	printf("\n");
	num =(((num ^ ~num) + 1));// >> 1) ^ num;

	for(i=31; i>=0; i--)
		printf("%d",(num >> i) & 1);
	printf("\n");
}
	
