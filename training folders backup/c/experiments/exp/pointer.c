#include <stdio.h>
#if 0
int main ()
{

	int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int (*ptr)[3][3];

	ptr = &a;

	printf ("\n%p", ptr);
	printf ("\n%p", ptr + 1);
	printf ("\n%p", *ptr);
	printf ("\n%p", *ptr + 1);
	printf ("\n%p", **ptr);
	printf ("\n%p", **ptr + 1);
	printf ("\n%d", *( *(*ptr + 2) + 2));

	return 0;


}

#endif

#if 0
int main ()
{
	int a[10][4];

	printf ("\nadress of a%p",a);
	printf ("\naddress of &a%p",&a);
	printf ("\naddress of a + 1%p",a + 1);

	printf ("\naddress of *a%p", *a);
	printf ("\naddress &a +1%p",&a + 1);

	printf ("\naddress of* a + 1%p", *a + 1);
	return 0;
}

#endif

#if 0
int main( int argc , char *argv[])
{

	printf ("\n%d", argc);
	printf ("\n%s", *argv);
	return 0;
}
#endif

#if 0
int main (void) 
{
	char* v[] = {"abc", "def", "ghi"};
	char **p;
	printf("%p\n", p);
	printf("%p\n", *p);
	p = v;
	printf ("%p\n", "abc");
	printf ("%p\n", v);
	printf("%p\n", p);
	printf("%p\n", *p);
	printf("%d\n", **p);	
//	printf ("%c\n",*++p[0]);
//rintf ("%c\n", (*++p)[0]);

	return 0;

}

#endif
#if 1
int main (void) 
{
	int a = 11;
	int *ptr = &a;

	*ptr++;

	printf ("%d", *ptr);

	return 0;


}
#endif
