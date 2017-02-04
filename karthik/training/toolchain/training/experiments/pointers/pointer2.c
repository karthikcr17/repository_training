#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showbits (int num)
{
	int i;
	for (i = 31; i >= 0; i--)
		printf ("%d ", (num >> i) & 1);
	printf ("\n");
}      

#if 0
int main(void)
{
	char a[4] = {1, 2, 3, 4};
	int b = 0;

	b =* (int *)a;

	printf("%08x\n", b);
	printf("%s \n","absv", "%s \n","abcd");
	showbits(b);
	
	return 0;
}
#endif

#if 0
char *s = "char *s = %c%s%c;main(){printf(s,34,s,34);}"; 
main(){printf(s,34,s,34);}
#endif


#if 1
int main(void)
{
	int a = 20;
	char b[4] = {0};
	
	b =( ) &a;

	printf("%s \n", b);


	return 0;
}
#endif
