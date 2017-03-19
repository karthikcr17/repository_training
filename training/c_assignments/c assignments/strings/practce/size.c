#include<stdio.h>

extern int size(char a[], int N)
{

	int i;

	for(i = 0; a[i]; i++);
	
	if(N == (i - 1))
		return 1;
	else
		return 0;
}
