#include<stdio.h>
int str_len(char *);
int main() 
{
	char str[100];
	int len = 0;

	printf("enter the string \n");
	fgets(str, 100, stdin);

	len = str_len(str);

	printf("the length of the string \n");
	printf("len = %d\n",len);

	return 0;
}

int str_len(char str[])
{

	static int i;

	if(str[i] != '\n'){
		i++;
		str_len(str);
	}
	return i;
}



