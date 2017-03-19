#include<stdio.h>

int num1; // it stores the num1 value you given
int num2; // it stores the num2 value you given
int N = sizeof(int) * 8; // it can stored the number of bits in size of int

#define max2num(num1,num2) for(i=N-1; i>=0; i--) { \
				if(((num1 >> i) & 1) ^ ((num2 >> i) & 1)) { \
				    if((num1 >> i) & 1){ res = 1;break; }         \
				    	else { res = 0;break; }         \
				     }                  \
				else                    \
					continue;       \
				}	

/* this program gives the maximum of two numbers*/

int main()
{
	int i;
	int res; // it stores the return value of macro

	printf("enter the number 1 :\n");
	scanf("%d",&num1);

	printf("enter the number 2 :\n");
	scanf("%d",&num2);

	max2num(num1,num2)
	
	if (res == 0)
		printf("num2 is max number : %d \n",num2);
	else if(res == 1)
		printf("num1 is max number : %d \n",num1);	
	else
		printf("both are equal\n");

}
