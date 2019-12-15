# include <stdio.h>

//extern int a;
extern int *ptr;
int main ()
{
	printf ("%d\n", *ptr);
	printf ("hello world\n");
	return 0;
}
