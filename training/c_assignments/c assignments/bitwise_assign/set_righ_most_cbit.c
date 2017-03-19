#include<stdio.h>

int num; //stored given value

#define set_r_most_cbit(num) (num | (num + 1))

/*this program clear the left most set bit */

int main()
{

	printf("enter the number:\n");
	scanf("%d",&num);

	printf("the number is:\n");
	show(num);

	num = set_r_most_cbit(num);

	printf("after the set the right most clear bit \n");
	show(num);
}
