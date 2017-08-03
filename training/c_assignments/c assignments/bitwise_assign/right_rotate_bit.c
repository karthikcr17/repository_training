#include<stdio.h>

unsigned int right_rotate_bit(unsigned int);/* function do rotate one bit 
					       to right */

unsigned int num; // it stored the value of number you can give
int N = sizeof(int) * 8; // find the size of integer

int main()
{

	printf("enter the number:\n");
	scanf("%d",&num);

	printf("the number is:\n");
	show(num);

	num = right_rotate_bit(num);

	printf("after right rotate the number is:\n");
	show(num);

}

unsigned int right_rotate_bit(unsigned int num) 
{
	int R; // it can store the right most bit

	R = num & 1;
	num = (num >> 1) | (R << (N - 1));

	return num;
}

