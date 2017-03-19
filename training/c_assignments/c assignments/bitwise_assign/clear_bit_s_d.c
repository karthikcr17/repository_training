#include<stdio.h>

#define set_bits_s_d(num,s,d) ((~(~(-1 << (d - s + 1)) << s)) & num) \
	| ~(~(-1 << (d - s + 1)) << s)

int num; // it stores the given number
int s;   // stores the source position
int d;   // stores the destination position
char nums[50]; // it stores the number in string format


/* this program set the bits from s position to 
   d position remaining bits are clear */

int main()
{

	printf("enter the number:\n");
	scanf("%s",nums);

	num = valid(nums);

	if(num = 0) 
		printf("enter the correct value\n");
	else {


		printf("the number is:\n");
		show(num);

		printf("enter the s position:\n");
		scanf(" %d",&s);

		printf("enter the d position :\n");
		scanf(" %d",&d);

		num = set_bits_s_d(num,s,d);

		printf("after set that bits number is :\n");
		show(num);
	}

}


