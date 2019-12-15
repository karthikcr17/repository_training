#include <stdio.h>
#if 0
//	int *p;
int main ()
{
	
	int *p;
	*p = 45;

//	printf ("%d", *p);

	return 0;
}
#endif

#if 0
struct rec{

	char ch;
	int sal;
}rec;

int main ()
{

	printf ("%d", sizeof (struct rec));
	printf ("%p", &rec.ch);
	printf ("%p", &rec.sal);
	return 0;

}
#endif
#if 1
struct node {
	int a;
	char c;
	int b;
}
