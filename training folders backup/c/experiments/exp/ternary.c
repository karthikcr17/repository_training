# include <stdio.h>

int fun (int a, int b)
{

	(a > b)? return a: return b;
}
int main (void)
{

	printf ("%d",fun (3,4));
	return 0;

}
