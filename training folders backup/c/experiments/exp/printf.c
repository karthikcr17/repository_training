#include <stdio.h>
#if 0
int main (void)
{
	int a;

	printf ("%p\n");
	printf ("%p\n", &a);
	getchar();
	return 0;
}
#endif

#if 1

int main ()
{
	char *buf = "hello\n";

	printf (buf);
	perror ( buf);
	return 0;

}
#endif
