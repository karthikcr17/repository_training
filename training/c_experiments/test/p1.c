#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

	int num;
	char buff[10];

	fgets(buff, 10, stdin);
	*(buff + strlen(buff) - 1) = '\0';

	num = atoi(buff);

	if(num & 1) 
		printf("odd\n");
	else 
		printf("even\n");

	return 0;
}
