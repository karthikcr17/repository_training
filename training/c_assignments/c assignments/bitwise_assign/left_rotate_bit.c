#include<stdio.h>

unsigned int left_roate_bits(unsigned int num);

unsigned int num; //stored the given number
int N = sizeof(int) * 8; // stored the size of bits in integer 

int main()
{

	printf("enter the number\n");
	scanf("%d",&num);

	show(num);

	num = left_roate_bits(num);

	printf("after left rotate the number is:\n");

	show(num);

}

unsigned int left_roate_bits(unsigned int num)
{
	int L; //stored it left most bit

	L = (num >> (N - 1)) & 1;

	num = (num << 1) | L;

	return num;
}
