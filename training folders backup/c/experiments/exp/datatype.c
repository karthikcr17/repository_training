#include <stdio.h>

#if 0

int main(void)
{
	printf("size of int is %d\n",sizeof(int));
	printf("size of float is %d\n",sizeof(float));
	printf("size of char is %d\n",sizeof(char));
	printf("size of double is %d\n",sizeof(double));

	return 0;
}

#endif

#if 0
int main (void)
{

	printf("size of signed int is %d\n",sizeof(signed int));
	printf("size of unsigned int is %d\n",sizeof(unsigned int));
	printf("size of short int is %d\n",sizeof(short int));
	printf("size of long int  is %d\n",sizeof(long int));


	printf("size of signed char is %d\n",sizeof(signed char));
	printf("size of unsigned char is %d\n",sizeof(unsigned char));
	//printf("size of short char is %d\n",sizeof(short char));
	//printf("size of long char is %d\n",sizeof(long char));


	//printf("size of signed float is %d\n",sizeof(signed float));
	//printf("size of unsigned float  is %d\n",sizeof(unsigned float));
	//printf("size of short float is %d\n",sizeof(short float));
	//printf("size of long float is %d\n",sizeof(long float));


	//printf("size of signed double is %d\n",sizeof(signed double));
	//printf("size of unsigned double is %d\n",sizeof(unsigned double));
	//printf("size of short double is %d\n",sizeof(short double));
	printf("size of long double is %d\n",sizeof(long double));


	return 0;


}

#endif

#if 0
int main()
{


	printf("size of long int  is %d\n",sizeof(long int));
	printf("size of long long int  is %d\n",sizeof(long long int));
	// printf("size of long long long int  is %d\n",sizeof(long long long int));
	//printf("size of long long long long int  is %d\n",sizeof(long long long long int));

	printf("size of long double  is %d\n",sizeof(long double));
	// printf("size of long long double  is %d\n",sizeof(long long double));
	// printf("size of long long long double  is %d\n",sizeof(long long long double));
	// printf("size of long long long long double  is %d\n",sizeof(long long long long double));


	printf("size of short int  is %d\n",sizeof(short int));
	//printf("size of short short int  is %d\n",sizeof(short short int));
	//printf("size of short short short int  is %d\n",sizeof(short short short int));
	//printf("size of short short short short int  is %d\n",sizeof(short short short short int));


	//printf("size of short float  is %d\n",sizeof(short float));
	//printf("size of short short float  is %d\n",sizeof(short short float));
	//printf("size of short short short float  is %d\n",sizeof(short short short float));
	//printf("size of short short short short float  is %d\n",sizeof(short short short short float));




	return 0;
}

#endif

#if 0


int main()
{
	int a=12,b=3;
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a*b);
	printf("%d\n",a/b);
	printf("%d\n",a%b);
	printf("%d\n",a|b);
	printf("%d\n",a&b);
	printf("%d\n",a^b);
	printf("%d\n",a<<b);
	printf("%d\n",a>>b);
	printf("%d\n",a++);
	printf("%d\n",a+b);
	printf("%d\n",a--);
	printf("%d\n",~a);
	printf("%d\n",sizeof(a));

	if (a==b)
		printf("%d\n",a+b);
	if (a!=b)
		printf("%d\n",a+b);
	if (a>b)
		printf("%d\n",a+b);
	if (a<b)
		printf("%d\n",a+b);
	if (a<=b)
		printf("%d\n",a+b);
	if (a>=b)
		printf("%d\n",a+b);
	if (a>=b&&a<=b)
		printf("%d\n",a+b); 
	if (a>=b||a<=b)
		printf("%d\n",a+b);
	if (a>=b)
		printf("%d\n",a+b);

	return 0;


}

#endif

#if 0

int main()
{

	float a=12,b=3;
	printf("%f\n",a+b);
	printf("%f\n",a-b);
	printf("%f\n",a*b);
	printf("%f\n",a/b);
	printf("%f\n",a%b);
	printf("%f\n",a|b);
	printf("%f\n",a&b);
	printf("%f\n",a^b);
	printf("%f\n",a<<b);
	printf("%f\n",a>>b);
	printf("%f\n",a++);
	printf("%f\n",a+b);
	printf("%f\n",a--);
	printf("%f\n",~a);
	printf("%d\n",sizeof(a));
	if (a==b)
		printf("%f\n",a+b);
	if (a!=b)
		printf("%f\n",a+b);
	if (a>b)
		printf("%f\n",a+b);
	if (a<b)
		printf("%f\n",a+b);
	if (a<=b)
		printf("%f\n",a+b);
	if (a>=b)
		printf("%f\n",a+b);
	if (a>=b&&a<=b)
		printf("%f\n",a+b);
	if (a>=b||a<=b)
		printf("%f\n",a+b);
	if (a>=b)
		printf("%f\n",a+b);
	a=b;
	a+=b;
	a-=b;
	a*=b;
	a/=b;
	a%=b;
	a<<=b;
	a>>=b;
	a&=b;
	a^=b;
	a|=b;



	return 0;

}

#endif
#if 0

int main()
{

	double a=12,b=3;
	printf("%f\n",a+b);
	printf("%f\n",a-b);
	printf("%f\n",a*b);
	printf("%f\n",a/b);
	printf("%f\n",a%b);
	printf("%f\n",a|b);
	printf("%f\n",a&b);
	printf("%f\n",a^b);
	printf("%f\n",a<<b);
	printf("%f\n",a>>b);
	printf("%f\n",a++);
	printf("%f\n",a+b);
	printf("%f\n",a--);
	printf("%f\n",~a);
	printf("%d\n",sizeof(a));
	if (a==b)
		printf("%f\n",a+b);
	if (a!=b)
		printf("%f\n",a+b);
	if (a>b)
		printf("%f\n",a+b);
	if (a<b)
		printf("%f\n",a+b);
	if (a<=b)
		printf("%f\n",a+b);
	if (a>=b)
		printf("%f\n",a+b);
	if (a>=b&&a<=b)
		printf("%f\n",a+b);
	if (a>=b||a<=b)
		printf("%f\n",a+b);
	if (a>=b)
		printf("%f\n",a+b);
	a=b;
	a+=b;
	a-=b;
	a*=b;
	a/=b;
	a%=b;
	a<<=b;
	a>>=b;
	a&=b;
	a^=b;
	a|=b;



	return 0;

}

#endif
#if 0
int main()
{
	char a='s',b='e';
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a*b);
	printf("%d\n",a/b);
	printf("%d\n",a%b);
	printf("%d\n",a|b);
	printf("%d\n",a&b);
	printf("%d\n",a^b);
	printf("%d\n",a<<b);
	printf("%d\n",a>>b);
	printf("%d\n",a++);
	printf("%d\n",a+b);
	printf("%d\n",a--);
	printf("%d\n",~a);
	printf("%d\n",sizeof(a));
	if (a==b)
		printf("%d\n",a+b);
	if (a!=b)
		printf("%d\n",a+b);
	if (a>b)
		printf("%d\n",a+b);
	if (a<b)
		printf("%d\n",a+b);
	if (a<=b)
		printf("%d\n",a+b);
	if (a>=b)
		printf("%d\n",a+b);
	if (a>=b&&a<=b)
		printf("%d\n",a+b);
	if (a>=b||a<=b)
		printf("%d\n",a+b);
	if (a>=b)
		printf("%d\n",a+b);
	a=b;
	a+=b;
	a-=b;
	a*=b;
	a/=b;
	a%=b;
	a<<=b;
	a>>=b;
	a&=b;
	a^=b;
	a|=b;



	return 0;

}

#endif

#if 0
int main ()
{
	int i = 10;
	int j = 20;
	printf ("sizeof (++i) = %d\n" , sizeof (j = j + i));
	printf ("j = %d \n", j);

	return 0;
}

#endif

#if 0
int main (void)
{
	unsigned int a = 10;
	while (a >= 0) {
		a--;
	}
	printf ("a =%d\n", a);
	return 0;
}

#endif

# if 0
int main ()
{
	char c = 126;
	c++;
	if (c == 'a') {
		c--;
	} else {
		c++;
	}
	printf ("%d\n", c);

	return 0;
}

#endif

# if 1
int main ()
{

	printf ("%08x\n", (~(0U) >> 30));
	return 0;
}

#endif
