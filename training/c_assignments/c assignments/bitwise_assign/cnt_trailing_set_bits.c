#include<stdio.h>

int cnt_trailing_set_bits(int num);

int num; // it stored value number you have to give
int count = 0; // it stores the number of trailing end set bits
int N = sizeof(int) * 8; //it stores the size of integer
char nums[50]; // it stores given number in string format

// this program counter number of trailing end clear bits

int main()
{

	printf("enter the number\n");
	scanf("%s",nums);

	num = valid(nums);

	if(num == 0)
		printf("enter the correct inputs \n");
	else {

		printf("the number is:\n");
		show(num);

		count = cnt_trailing_set_bits(num);

		printf("the number of trailing set bits is: %d\n",count);
	}
}

int cnt_trailing_set_bits(int num) /* this function counts trailing end set
				     bits and return that value */
{

	int i;


	for(i=0; i<=N-1; i++) {
		if((num >> i) & 1)
			count = count + 1;
		else
			break;
	}
	return count;
}



