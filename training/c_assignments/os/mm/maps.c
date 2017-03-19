#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = NULL;

	ptr = (int *)malloc(sizeof(int));

	printf("pid %d\n",getpid());

	getchar();

	return 0;
}
