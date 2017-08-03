#include<stdio.h>
#define MAX 1024
int (*fun)(const char *format, ...);
int main()
{

	printf("PID %d\n",getpid());


	unsigned int *p;
	unsigned int q;
	unsigned int count = 0;
	unsigned int i = 0;


	scanf("%x",&q);	
	p = (unsigned int *)q;
	fun = p;
	i = (*fun)("helloo %x\n",q);	 
	
	getchar();

	return 0;
}
	

	
