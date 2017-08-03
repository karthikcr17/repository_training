#include<stdio.h>

#define getbits(num,p,n) ~(-1 << n) & (num >> p) /*get the n bits 
								from p position*/

int getb; //stored get bits
unsigned int num; //stored the given number
int p; //stored positon of bit in a number to you want
int n; //stored number of bits to get

int main()
{
	
	printf("enter the number\n");
	scanf("%d",&num);

	printf("the number is:\n");
	show(num);

	printf("enter the position: \n");\
	scanf(" %d",&p);

	printf("enter the no.of bits to get :\n");
	scanf(" %d",&n);

	getb =  getbits(num,p,n);

	printf("the bits are :\n");
	show(getb);
}
