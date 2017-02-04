#include<stdio.h>
#define MAX 10

int main()
{

	/*aefsrdffdghjj*/
	//sdffgnhh
	int num, i, p, n;
	num = MAX;
	scanf("%d",&num);
	for(i=31; i>=0; i--)
		printf("%d",(num >> i) & 1);
	printf("\n");
	num = num | (num + 1); 
	for(i=31; i>=0; i--)
		printf("%d",(num >> i) & 1);
	printf("\n");
}
	
