#include<stdio.h>
//global = 'a';
int main()
{
	int num = 0xeffffffe;
	int i;
	char *str = "hello";
	int *ch;
	ch = 0x8048320;
	for(i = -10; i < 20; i++)
		printf("%x\n",*(ch + i));
		printf("%x\n",num);
	return 0;
}
