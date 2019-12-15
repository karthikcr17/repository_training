#include <stdio.h>

#if 0
int m;
int p = 55;
static int n = 10;
int main(void)
{
	char str[] = "Global";
	int a, b;

	int m = p;
	scanf("%d%d", &a, &b);
	printf(" = %d\n", printf("%d%d", a, b));

	return 0;
}

#endif


#if 0
main ()
{
	int a = 10;
	char *b = 20;

	printf ("addn : %d\n", &b[a]);

}
#endif


#if 1
int add (int x, int y) {
//	return  printf ("%*c%*c", x, ' ', y, ' ');
//	return printf ("%*c%*c", x, y);
	return x+y;
}	
	
/*main ()
{
int a;

	a = printf ("%*c\n", x, ' ', y, ' ');


	printf ("%d\n", add (3, 4));
}
*/
#endif
