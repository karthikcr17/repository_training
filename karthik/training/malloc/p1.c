#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
	int *p = NULL;
	int i;
	p = &i;
	int j = 0;
	size_t a = -1;
	unsigned long int b = -1;
//	p = p + 0xffffffffffffffff;
	if(a == b)
//	printf("%p\n",p);
	printf("%lu\n",ULONG_MAX);
	printf("%u\n",UINT_MAX);
	
//	if(NULL == (p = (int *)malloc((INT_MAX)*1))) {
//		printf("malloc is failled\n");
//		exit(1);
//	}
/*	while(1) {
	*p = j;
	p = p + 10;
	printf("%d\n",j);
	j++;
	}
*/
	return 0;
} 
