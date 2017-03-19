#include<stdio.h>
int print_num(int);
int main()
{
	int num = 0;
	
	print_num(num);

	return 0;
}
int print_num(int num)
{
	if(num < 100){
		print_num(++num);
		printf("%d\n",num);
	}
	return num;
}
	
