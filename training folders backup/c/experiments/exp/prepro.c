#include <stdio.h>
#if 0
int  main()
{

	return 0;
}

#endif
#if 0
#define dprint(expr) printf(#expr "expr= %d \n",expr)
int main()
{
	int x = 2;
	int y = 3;

	dprint(30/y);
	return 0;
}
#endif

# if 0
	#line 5 "preproc.c"
int main (void)
{
	printf ("%s %d", _FILE_,_LINE_);
	
	return 0;
}
#endif

#if 1
#define A B
#define B C
#define C A
int main ()
{

	A

}
#endif
#if 0
# define max(s) #s

int main (void) 
{
	char str[] = max(globaledge);


	return 0;

	
}

#endif

#if 0

int main (void)
{
	typedef int *i;
	int j = 10;
	int *z  = &j;
	int ** b = &z;
//	i *a  = &j;
//	printf ("%d", **a);
	printf ("%d",**b);
	return 0;


}

#endif
#if 0
#define sum(a,b) (a++ + ++b)
int main ()
{
	int x = 5;\
	int b = 6;
	int * const ptr = &x;

	++(*ptr);
	
	x = sum (x,b);
	
	return 0;


}
#endif
#if 0
#define cat(x, y) x##y
#define xcat(x, y) cat (x, y)
int main ()
{
	xcat (xcat (1, 2), 3);

	return 0;
}

#endif
