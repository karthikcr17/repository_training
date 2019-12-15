#include <stdio.h>

#if 0
int main ()
{
	int x;
	int y;
	int z = 0;
	
	x = (z == z++);
	y = (z == z);

	printf ("x = %d,y = %d\n",x,y);
	return 0;
}
#endif

# if 0
int main ()
{
	int i = 5;
	i = (++i) + (++i) + (++i);
	printf ("%d", i);
	printf ("\n%d %d %d", i++, i, i++);
	return 0;
}
#endif

# if 0
//# define else if(1)
int main ()
{
	if (fork()) {
		printf ("hl");
	} else {
		printf ("helo");
	}
	return 0;
}
#endif

# if 0

int main (void) 
{
	int a = 25;
	int b = 35;

	printf ("a | b = %d\t a || b=%d\n", a|b, a ||b );

	return 0;

}
#endif

#if 1

int main (void)
{
	int a = 10;

	a = a % 4;

	return 0;

}
#endif
