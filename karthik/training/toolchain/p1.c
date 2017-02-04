#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p = NULL;
	int i = 0;

	p = (int *)malloc(sizeof(int));
	printf("%p\n",p);

	for(i = 0; i < 1; i++)
		p[i] = i;

	char *ch = NULL;

	ch = malloc(10);
	printf("%p\n",ch);

	*ch = 'g';

	free(p);
	free(ch);

	return 0;
}

	
