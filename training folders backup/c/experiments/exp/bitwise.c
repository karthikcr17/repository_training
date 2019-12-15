#include <stdio.h>

//Additon of two nubers using bitwise

# if 0
int bitwiseadd(int x, int y)
{
	int carry;

	while (y != 0) {

		carry = x & y;

		x = x ^ y; 

		y = carry << 1;
	}

	return x;
}
int main()
{
	int num1 = 0, num2;
	unsigned int num3;
	num1--;

	printf("\nEnter two numbers to perform addition using bitwise operators: ");

//	scanf("%d", &num1);
	scanf ("%d", &num2);
//	printf("\nSum is %d", bitwiseadd(num1, num2));
	num3 = num1 >> num2;
	showbits (num3);
	printf ("%d",num1);

	return 0;
}
#endif

#if 0

int main ()
{
	int a = 1;
	scanf ("%d", &a);
	scanf ("%d", &a);
	a = a << 35;
	printf ("%d\n", a );
	printf ("%d\n", 1 << 35);

	return 0;
}

#endif

#if 0
#define max(x,y) x^((x^y)& - (x<y))
#define min(x,y) y^((x^y)& - (x<y))
int main ()
{
	int a = 4;
	int b = 6;

	printf ("%d", min(a,b));
	return 0;
}
#endif

#if 0

int main (void)
{
	int num = 5;

	((num & (num - 1)) && (printf("odd"))) || (printf ("even"));
	return 0;
}

#endif

#if 1



void School();
void College() ;

#pragma startup School 105
#pragma startup College
#pragma exit College
#pragma exit School 105

void main(){
printf("\nI am in main");

}

void School(){
printf("\nI am in School");

}

void College(){
printf("\nI am in College");

}

#endif	
