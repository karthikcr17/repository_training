#include<stdio.h>

unsigned int left_roate_n_bits(unsigned int num, int n);

unsigned int num; 
int n; //no.of rotations
int N = sizeof(void*) * 8; // find the number of bit processor

int main()
{

	printf("enter the number\n");
	scanf("%d",&num);

	show(num);

	printf("enter the number of rotations\n");
	scanf(" %d",&n);

	num = left_roate_n_bits(num, n);

	printf("after left rotate the number is:\n");

	show(num);

}

unsigned int left_roate_n_bits(unsigned int num, int n)
{
	int L; //stored it left most bit
	int i;

	for(i=0; i<n; i++) {

		L = (num >> (N - 1)) & 1;

		num = (num << 1) | L;
	}

	return num;
}
