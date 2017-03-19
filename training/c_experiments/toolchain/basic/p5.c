#include<stdio.h>
int num[20] = {0};
int main()
{
	printf("%p\n",num);
	num[400] = 10;
	printf("%p\n",(num + 400));
	//scanf("%d",&num);
	return 0;
}
