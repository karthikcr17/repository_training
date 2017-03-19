#include<stdio.h>

int cnt_leading_set_bits(int num);

int num; // it stored value number you have to give
int count = 0; // it stores the number of leading set bits
int N = sizeof(int) * 8; //it stores the size of integer
char nums[50]; /* it stores the given number in string format */

// this program counter number of leading set bits

int main()
{

	printf("enter the number\n");
	scanf("%s",nums);

	num = valid(nums);

	if(num == 0)
		printf("enter the correct values \n");
	else {

		printf("the number is:\n");
		show(num);

		count = cnt_leading_set_bits(num);

		printf("the number of leading set bits is: %d\n",count);
	}
}

int cnt_leading_set_bits(int num) /* this function counts leading set
									 bits and return that value */
{

	int bit; //it stores leading end bit value
	int i;


	for(i=N-1; i>=0; i--) {
		bit = num & (1 << i);
		if(bit == 0) 
			break;
		else
			count = count + 1;
	}
	return count;
}



