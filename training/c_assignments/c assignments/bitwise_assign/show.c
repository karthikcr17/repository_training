#include<stdio.h>

int show(int num)
{
	int i, N;
	N = sizeof(void*) * 8;
	for(i=N-1; i>=0 ;i--) {
		printf("%d",1 & (num >> i));
		if(i % 8 == 0)

			printf(" ");
	}
	printf("\n");
	return 0;
}


