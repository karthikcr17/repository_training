# include <stdio.h>
# if 0
int main()
{
	int arr[] = {95,12,13,14,15};
	int n;
	int y;
	int i;

	n =  (&arr + 1);y = (&arr);
	n = (n - y) / 4;
	for (i = 0 ; i < n ;i++) {
		printf ("%d\t", arr[i]);

	}

	return 0;
}

#endif

# if 0

int main (void)
{
	int i = 10;
	int * ptr;
	int (*funcptr) (void);
	//	func();
	funcptr = main;
	ptr = (int *)funcptr;

	printf ("\n%p", &main);
	printf ("\n%p", *(++funcptr));
	printf ("\n%p", *(++funcptr));
	printf ("\n%p", *(++funcptr));
	printf ("\n%p", **(funcptr));
	printf ("\n%p", *(++funcptr));
	printf ("\n%p", *(++funcptr));
	printf ("\n%p", *(++funcptr));
	printf ("\n%p", *(++funcptr));
	printf ("\n%p", *(++funcptr));
	printf ("\n%p", *(++funcptr));
	printf ("\n%p",ptr);

	printf ("\n%p",++ptr);
	printf ("\n%p",++ptr);
	printf ("\n%p",++ptr);
	printf ("\n%p",++ptr);
	printf ("\n%p",++ptr);

	printf ("\n%p\n", &i);
	return 0;

}
void func (void)
{


	//	printf ("%p", &i);

}
# endif
# if 1
int b = 6;
int main ()
{
	int a = 10;
	printf ("\n%d", a);
	func();
	printf ("\n%d", a);
	return 0;
}

void func (void)
{
	int b;
//	*a++;
	int *ptr = &b;
	while(1){
		++ptr;
	if (10 == *(ptr)) {
		break;
	}
	}
	*ptr = 20;
}



#endif
