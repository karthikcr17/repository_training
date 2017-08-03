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

	if(num & (1 << 31)) 
		printf("negative\n");
	else 
		printf("positive\n");

	return 0;
}
