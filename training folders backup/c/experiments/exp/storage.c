#include <stdio.h>
#if 0
//static int b = 4;
//	int a = 4;
void func (int, int);
int main ()
{
	int a = 0;
	int i;
	static int b = 0;

	/*	func (a,b); 
		printf("\n%d",a);
		printf("\n%d",b);
		func (a,b);
		func (a,b);*/

	for(i=0;i<4;i++) {

		printf ("\n%d\t ", ++a);
	}

	for(i=0;i<4;i++) {

		printf("\n%d\t", ++b);
	}

	printf ("\n%d\t", a);
	printf ("\n%d\t",b);
	return 0;

}	

#endif


#if 0

void func (int , int);
void func1 (int, int);
extern int d;

int main ()
{
	int a = 2;
	int b = 3;
	//	static int result;
	//	int r;
	func (a,b);
	func1(a,b);
	func(a,b);
	func1 (a,b);
	func1 (a,b);

	return 0;
}

void func (int a, int b)
{
	int r;
	int c = 0;
	static int e;
	r = a + b + c + d;
	printf ("\n%d", r);
	c++;
	d++;
	e++;
}
void func1 (int a, int b)
{
	int result;
	static int e;
	//	static int d = 0;
	result = a + b + d + e;

	d ++;
	printf ("\n%d", result);
	d++;
	e++;

}
#endif

#if 0

int main ()
{
	int a = 10;
	static int *b = (int *)1;

	b = &a;
	return 0;
}
#endif

#if 0

int main ()
{
	static int c =20;
	int a = c;
	static int b = c;

	return 0;
}

#endif

#if 0

int a = 20;

int main ()
{
	//	int a = 30;

	{
		printf ("%d\n", a);
		int a = 50;

		printf ("%d\n", a);


	}
	printf ("%d\n", a);
	return 0;
}
#endif

#if 0

int main ()
{
	static int a = 20;

	func (a);
	return 0;
}

void func (auto int a) 
{



}
#endif

#if 0

auto int a = 1;
int main ()
{

	return 0;
}

#endif

#if 0

int a;
//int a = 10;
int a;
//int a = 10;
int main (void)
{
	printf ("%d\n", a);
	return 0;
}
#endif

#if 0

#include<stdio.h>
int main()
{
	char *ptr="Hello"
		"'\0'"
		"world";

	printf("%s",ptr);
}
#endif

#if 1

static int a;
int a;

int main ()
{


	return 0;
}
#endif
