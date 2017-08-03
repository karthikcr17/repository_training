#include<stdio.h>

int cnt_trailing_clear_bits(int num);

int num; // it stored value number you have to give
int count = 0; // it stores the number of trailing end clear bits
int N = sizeof(int) * 8; //it stores the size of integer
char nums[50]; /* it stores the given input as string format */

// this program counter number of trailing end clear bits

int main()
{

	printf("enter the number\n");
	scanf("%s",nums);

	num = valid(nums);

	if(num == 0) 
		printf("enter the correct input value \n");
	else {



		printf("the number is:\n");
		show(num);

		count = cnt_trailing_clear_bits(num);

		printf("the number of trailing clear bits is: %d\n",count);
	}
}

int cnt_trailing_clear_bits(int num) /* this function counts trailing end clear
				     bits and return that value */
{

	int bit; //it stores trailing end bit value
	int i;


	for(i=0; i<=N-1; i++) {
		bit = (num >> i) & 1;
		if(bit == 0) 
			count = count + 1;
		else
			break;
	}
	return count;
}



