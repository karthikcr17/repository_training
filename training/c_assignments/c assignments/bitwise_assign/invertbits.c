#include<stdio.h>

int invertbits(int, int, int);

int numx; // stored a number you have to given
int pos;  // stored position to set
int no;   // stored a no.of bits to invert

// this program returns the number after invert the n bits from given position

int main()
{
	
	printf("enter the number\n");
	scanf("%d",&numx);

	printf("the number is:\n");
	show(numx);

	printf("enter the position: \n");
	scanf("%d",&pos);

	printf("enter the number of bits to set: \n");
	scanf("%d",&no);

	numx = invertbits(numx, pos, no);
	
	printf("after invert bits the number is:\n");
	show(numx);
}

int invertbits(int numx, int pos, int no) /* inverting no bits from position*/ 
{

	numx = (~(-1 << no) << (pos - no + 1)) ^ numx;

	return numx;
}
