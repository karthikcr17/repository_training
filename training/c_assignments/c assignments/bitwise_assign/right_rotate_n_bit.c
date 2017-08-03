#include<stdio.h>

unsigned int right_rotate_n_bits(unsigned int, int n);/* function do rotate number of
							 bits to right */

unsigned int num; // it stored the value of number you can give
int N = sizeof(int) * 8; // find the size of integer
int n; // stored the number of rotations you do

int main()
{

	printf("enter the number:\n");
	scanf("%d",&num);

	printf("the number is:\n");
	show(num);

	printf("enter the no.of rotations:\n");
	scanf(" %d",&n);

	num = right_rotate_n_bits(num, n);

	printf("after right rotate the number is:\n");
	show(num);

}

unsigned int right_rotate_n_bits(unsigned int num, int n) 
{
	int R; // it can store the right most bit
	int i;

	for(i=0; i<n; i++) {

	R = num & 1;
	num = (num >> 1) | (R << (N - 1));
	}

	return num;
}

