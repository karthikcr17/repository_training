#include<stdio.h>
#include<math.h>

#define clr_left_most_set(num)  for(i=N-1; i>=0; i--) \
									  if((num >> i) & 1) break; \
									num = num ^ (1 << i)

int num; //stored the given number
int N = sizeof(int) * 8; /* it stores the size of integer */
char nums[50]; /* it stores the given number in string for validation */

// this program clear the left most set bit

int main()
{


	int i;

	printf("enter the number \n");
	scanf("%s",nums);

	num = valid(nums);

	if(num == 0)
		printf("enter the correct value \n");
	else {

		printf("\nthe number is :\n");
		show(num);

		clr_left_most_set(num);

		printf("after clear left most bit the number is:\n");
		show(num);
	}
} 
