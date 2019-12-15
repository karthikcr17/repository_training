#include <stdio.h>
#if 0
int fn (int add)
{
	add++;

	return add;

}

int main ()
{
	static main;  // main can be used as a variable

	main = fn (main);
	printf ("%d", main);


	return 0;

}

#endif 

#if 0

struct mystruct {
	int a;
	char name[];  // with out giving array size it gives only integer size
};

int main()
{
//	char name[];	
	printf ("%d", sizeof(struct mystruct));
	return 0;
}
#endif

#if 1

struct my {
	unsigned int a:4;
	unsigned int b:5;
}v1 = {-1, -1};


int main ()
{

	printf ("%u,%u", v1.a,v1.b);

	return 0;
}

#endif
