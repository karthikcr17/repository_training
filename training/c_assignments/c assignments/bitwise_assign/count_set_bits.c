#include<stdio.h>

int count_bit_set(int num); //this function counts the no.of set bits

int num; //it stored the number you can give
int count = 0; //it store the value of number of set bits
int N = sizeof(void*) * 8; //it stores the size of compiler 

// this program counts the number of set bits in number

int main()
{

	printf("enter the number: \n");
	scanf("%d",&num);

	printf("the number is:\n");
	show(num);

	count = count_bit_set(num);

	printf("the no.of set bits in given number: %d\n",count);

}

int count_bit_set(int num)
{
	int i;
	int temp; // it stores the value of each bit

	for(i=0; i<N-1; i++) {
		temp = (num >> i) & 1;
			if(temp == 1)
				count = count + 1;
	}
	return count;
}
