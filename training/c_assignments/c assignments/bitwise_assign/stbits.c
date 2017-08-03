#include<stdio.h>

int setbits(int, int, int, int);

int numx; // stored a destination return number
int numy; // In this stored a given number
int pos;  // stored position to set
int no;   // stored a no.of bits to set

// this program returns the number after set the n bits from given position

int main()
{
	
	printf("enter the number\n");
	scanf("%d",&numy);

	printf("the number is:\n");
	show(numy);

	printf("enter the position: \n");
	scanf("%d",&pos);

	printf("enter the number of bits to set: \n");
	scanf("%d",&no);

	numx = setbits(numx, pos, no, numy);
	
	printf("after set bits the number is:\n");
	show(numx);
}

int setbits(int numx, int pos, int no, int numy)
{

	numx = (~(-1 << no) << (pos - no + 1)) | numy;

	return numx;
}
