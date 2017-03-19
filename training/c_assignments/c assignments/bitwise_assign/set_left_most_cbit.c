#include<stdio.h>

int num; //stored the given number
int N = sizeof(void*) * 8;

#define set_left_most_cbit(num)  for(i=N-1; i>=0; i--) \
				      if(((num >> i) & 1) == 0) break; \
						num = num | (1 << i)

// this program set the left most clear bit

int main()
{
	int i;
	
	printf("enter the number \n");
	scanf("%d",&num);

	printf("\nthe number is :\n");
	show(num);

	set_left_most_cbit(num);

	printf("after set left most clear bit the number is:\n");
	show(num);

} 
