#include<stdio.h>

extern int show(int);

#define BIT_TS(num, pos) (num | (1 << pos))

int num; 
int pos; //position to set in number

int main()
{
	printf("enter the number\n");
	scanf("%d",&num);

	show(num);

	printf("enter the position set\n");
	scanf(" %d",&pos);


	printf("after the set bit the number\n");

	show(num);
}


