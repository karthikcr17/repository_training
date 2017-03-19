#include<stdio.h>

int num; // it stores the given number
int s;   // stores the source position
int d;   // stores the destination position

#define clear_bits_s_d(num,s,d) (((~(-1 << (d - s + 1)) << s)) & num) \
					| (~(-1 << (d - s + 1)) << s)
							

/* this program clear the bits from s position to 
                   d position remaining bits are set */

int main()
{

	printf("enter the number:\n");
	scanf("%d",&num);

	printf("the number is:\n");
	show(num);

	printf("enter the s position:\n");
	scanf(" %d",&s);

	printf("enter the d position :\n");
	scanf(" %d",&d);

	num = clear_bits_s_d(num,s,d);

	printf("after clearing that bits number is :\n");
	show(num);

}
		

