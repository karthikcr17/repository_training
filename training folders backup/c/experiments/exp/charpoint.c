#include <stdio.h>
#if 0

{

	char buf1[20] = {'G','L', 'O', 'B', 'A', 'L'};
	char buf2[20] = "GLOBAL";
	char *ch =  "global";
	ch[4] = 'm';
    buf1[4] = 'M';
	buf2[4] = 'M';

 	printf ("%s", buf1);
	printf ("%s", buf2);

	return 0;
}
#endif

#if 0
int main()
{
	int *aint[10];

	aint = malloc (40);
//	aint[1] = malloc (sizeof (int));

	printf ("\n%p", aint[0]);
	printf ("\n%p", aint[1]);

	return 0;



}

#endif
#if 0

int main ()
{
	void *n;
//	*n = 4; its not possible to dereference a void pointer
	int a = 1;
	n = &a;
//	printf ("%d",*n);
	printf ("\n%p", n + 1);
	printf ("\n%p", &a + 1);
	return 0;
}
#endif

#if 0
// pointer assingment using type casting

int main ()
{
	int n = 0x5065;
	char *ptr;

	ptr =(char*)&n ;

	printf("%c", *ptr);
	printf("\n%p", ptr);
	printf("\n%p", &n);
	return 0;

}

#endif

#if 0
// type casting examples

int main ()
{
	char buf[64];
	int *n;
	int *m;
	n = (char*)buf;
    m = (char*)(buf + 39);
	buf[0] = 'g';
	buf[1]= 'x';
	buf[39] = 'y';
	printf ("\n%p", n);
	printf ("\n%p",m);
	printf ("\n%c", *m);
	return 0;
}
#endif
#if 0
// pointers vs arrays

int main ()
{

	char a[6];
	printf ("\n%p", a);
	printf ("\n%p", a + 1);
	printf ("\n%p", &a + 1);

	return 0;
}

#endif
#if 1
typedef int (*INTARRAY)[10];
typedef int INTARR[10];

int  main ()
{
	INTARRAY a;
	INTARR b = {1, 2, 3, 4, 5};

	a = b;
	printf ("%d", sizeof (a));
	b[5] = 6;
	printf ("\n%p",a[5]);
	printf ("\n%p", &b[5]);
	return 0;

}

#endif
