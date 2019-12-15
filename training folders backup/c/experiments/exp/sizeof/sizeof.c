#include <stdio.h>

#if 0
double fun (int, int);
int main ()
{
	printf ("%d", sizeof (fun));
	return 0;
}

double fun (int a, int b) 
{
	return 0;

}

#endif

#if 1
size_t my_size (int n);
int main ()
{
	int n;

	scanf ("%d", &n);

	printf ("%d\n", my_size (n));

	return 0;
}

size_t my_size (int n)
{
	char a[n + 3];

	return sizeof (a);

}
#endif
