#include <stdio.h>
/*void m();
void n()
{
	m();
}*/
int main()
{
	char str[5];

	printf("%d\n",getpid());

	fgets(str, 10, stdin);

	return 0;
}

