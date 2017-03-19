#include<stdio.h>

#define clear_r_most_sbit(num) (((num ^ (num - 1)) & num) ^ num)

int num; //stored given value
char nums[50]; // it stored given number in string format

/*this program clear the left most set bit */

int main()
{

	printf("enter the number:\n");
	scanf("%s",nums);

	num = valid(nums);

	if(num == 0)
		printf("enter the correct value \n");
	else {

		printf("the number is:\n");
		show(num);

		num = clear_r_most_sbit(num);

		printf("after the clear the right most set bit \n");
		show(num);
	}
}
