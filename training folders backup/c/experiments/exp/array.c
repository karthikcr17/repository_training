#include <stdio.h>
# if 0
int main (void)
{
	char a[20000] = {[0 ... 19999] = 'x'};
	
	a[999] = 'R';

	a[1999] = 'P';

	a[1994] = 'S';

	a[9999] = 'Y';

	a[19999] = 'M';

	return 0;
}

# endif

#if 0

int main (void)
{

	int a[3] = {1, 2, 3};
	a[4] = 20;
//	printf ("%d", a[1000]);
//	a[6] = 23;
	return 0;
}

# endif

# if 0 
int main (void) 
{
	int a[] = {000070, 0000001, 00000001};

	printf ("%o", a[0]);

	return 0;

}
#endif

#if 0

void size (char arr[10])
{
	char b[10];
	printf ("%d size of array in function\n ", sizeof (arr));
	printf ("%d size of array in function\n ", sizeof (b));
}

int main ()
{
	char arr[10];

	printf ("%d size of array in main \n ", sizeof (arr));
	size (arr);
	return 0;
}
#endif

# if 0
int main ()
{
	float arr[] = {12.4 ,2.3, 4.5 ,6.7};

	printf ("%d\n", sizeof(arr));


	return 0;
}
#endif

#if 0
int main (void) 
{
	int a[][1] = {1, 2, 3};

	printf ("%d\n", a[0][0]);
	printf ("%d\n", a[0][1]);
	printf ("%d\n", a[0][2]);
	printf ("%d\n", a[0][3]);
	printf ("%d\n", a[1][0]);
	printf ("%d\n", a[1][1]);
	printf ("%d\n", a[1][2]);
	printf ("%d\n", a[2][0]);
	printf ("%d\n", a[2][1]);
	printf ("%d\n", a[2][2]);

	return 0;
}

#endif

#if 0

int main (void) 
{
	char c[10] = "hello";

	printf ("hello world");
	return 0;
}
#endif

#if 0
#define SIZE sizeof(arr)/sizeof(arr[0])

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;

    for(i = 0; i <= SIZE ; i--) {
        printf("GLOBAL EDGE");
    }
    return 0;
}

#endif

#if 1 

int main ()
{
	int n;
	int arr[n];
	

}
