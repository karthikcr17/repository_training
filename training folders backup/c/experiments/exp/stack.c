# include <stdio.h>
#if 0
int main (void) 
{
	int a;
	printf ("hello");
	//	scanf ("%d", &a);

	return 0;

}
# endif
# if 0

void fun1 ()
{
	int a = 10;
	int *ptr = &a;
	printf ("%p\n", ptr);
	printf ("%p\n", &a);
	while(1){
		ptr++;
		if (*ptr == 20) {
			break;
		}
	}
	printf ("%d\n", *ptr);
	printf ("%p\n", ptr);
}
int fun()
{
	int b = 20;

	printf ("%p\n", &b);
	
}
int main (void)
{
	int a = 10;
	printf ("%p\n", &a);
	fun ();
	fun1 ();
	return 0;
}
#endif

#if 0
void fun1()
{
	int a = 10;
	printf ("%p\n", &a);

}
void fun2 ()
{
	int b = 20;
	printf ("%p\n", &b);
}

int main ()
{
	fun1();
	fun2();
	return 0;
}
#endif

#if 0

//int a[10];

int main ()
{
//	int a = 10;
	int b[20];
	int a[10];
	a[11] = 12;

//	printf ("%d\t %d", ++a, a);
//	b = 10;

	return 0;


}
#endif

#if 1
int main ()
{
	int a = 5;

	a++;
	
	return 0;

}

#endif
