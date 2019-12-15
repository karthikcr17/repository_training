#include <stdio.h>
# if 0

int main (void)
{

	int (*b);
	int a = 2;

	b = &a;

	printf ("%p", b);
	printf ("%d", *b);
	return 0;


}

# endif

# if 0

int main ()
{
	int a[] = { 01, 011, 0100, 01000 };
	int i;
	int b = 0010;
	for (i = 0; i < 4; i++) {
		printf ("%d\t", a[i]);
	}
	printf ("%d\n", b);
	return 0;

}
# endif

# if 0
void size (int a[10])
{

	printf ("size is %d \n", sizeof (a));

}

int main ()
{
	int a[10];
	int b = 10;
	size (a);
	printf ("size of a is %d\n", sizeof(a));
	printf ("%d \n", a[10] );
	printf ("%p \n", &a[12] );
	printf ("%p \n", &b );
	return 0;
}

#endif

#if 1 

int a;

int main (void)
{

	return 0;

}

#endif
