#include<stdio.h>
#include<string.h>
#define MALLOC(p,n) memset(p,'\0',n)
//char a[MAX];
int main()
{
	char *p = NULL;

	MALLOC(p, 20);
	
	fgets(p, 30, stdin);

	printf("%s\n",p);

	return 0;
}

	


