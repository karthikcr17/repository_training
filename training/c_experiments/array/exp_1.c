#include<stdio.h>
#include<limits.h>
#include<float.h>

#if 0
//prints the ranges of data types
int main()
{
	printf("integer max size %d\n",INT_MAX);
	printf("integer min size %d\n",INT_MIN);
	printf("char max size %d\n",CHAR_MAX);
	printf("char min size %d\n",CHAR_MIN);
}
# endif
#if 0
//size of the data types
int main()
{
	printf("size of int %d\n",sizeof (int));
	printf("size of char %d\n",sizeof (char));
	printf("size of float %d\n",sizeof (float));
	printf("size of double %d\n",sizeof (double));
	printf("size of shortint %d\n",sizeof (short));
}
#endif
#if 0
//call function from one program to another and extern veriable

int fun(int);
extern int x;

int main()
{
	printf("%d\n",x);
	int y;
	y = fun(x);
	printf("%d\n",y);
}
#endif
#if 0
//auto veriables
int fun(int);
int main()
{
	auto int y = 10;
	int x;
	printf("%d\n",y);
	x = fun(y);
	printf("%d\n",x);	
	x = fun(y);
	printf("%d\n",x);	
}
int fun(int y)
{
	y = 5;
	return y+2;
}
#endif
#if 0
//file static veriables
static int y = 5;
int fun();
int main()
{
	y = y+1;
	printf("value of y %d\n",y);	
	fun();
	printf("value of y at after first call %d\n",y);	
	fun();
	printf("value of y at after second call %d\n",y);	
}
int fun()
{
	y = y+1;
	return y;
}
#endif
#if 0
//program static veriables
int fun();
int main()
{
	int x;
	x = fun();
	printf("the value of first fun call x= %d\n",x);	
	x = fun();
	printf("the value of after second fun call x= %d\n",x);	
}
int fun()
{
	static int y = 5;
	y = y+2;
	return y;
}
#endif
#if 0
// show bits
int main()
{
	int num, i, N;
	printf("enter the number \n");
	scanf("%d",&num);
	N = sizeof(void*) * 8;
	printf("%d\n",N);
	printf("enter the number\n");
	for(i=N-1; i>=0 ;i--) {
		printf("%d",1 & (num >> i));
		if(i % 8 == 0)
				printf(" ");

	}
	printf("\n");
}
#endif
#if 0
//program on basic calculator 
int main()
{
int num1, num2;
int res;
char op;
printf("enter the first number\n");
scanf("%d",&num1);
printf("enter the second number\n");
scanf("%d",&num2);
printf("select the option '+','-','*','%','/', \n");
scanf(" %c",&op);
switch(op)
{
	case '+':
		printf("addition of two numbers\n");
	res = num1 + num2;
	printf("the result value is %d\n",res);
	break;
	case '-':
		printf("difference of two numbers\n");
	res = num1 - num2;
	printf("the result value is %d\n",res);
	break;
	case '*':
		printf("multiplication of two numbers\n");
	res = num1 * num2;
	printf("the result value is %d\n",res);
	break;
	case '/':
		printf("divison of two numbers\n");
	res = num1 / num2;
	printf("the result value is %d\n",res);
	break;
	case '%':
		printf("modulus of two numbers\n");
	res = num1 % num2;
	printf("the result value is %d\n",res);
	break;
	default :
	printf("enter the correct options\n");
}
}
#endif		
#if 0
//set a bit
int main()
{
	int num, pos;
	int i;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the position to set\n");
	scanf("%d",&pos);
	printf("after set the number is\n");
	num = num | (1 << pos);
	for(i=31; i>=0 ;i--) {
		printf("%d",1 & (num >> i));
		if(i % 8 == 0)
			printf(" ");
	}
	printf("\n");
}
#endif
#if 0
//clear a bit
int main()
{
	int num, pos;
	int i;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the position to clear\n");
	scanf("%d",&pos);
	printf("after clear the number is\n");
	num = num & ~(1 << pos);
	for(i=31; i>=0 ;i--) {
		printf("%d",1 & (num >> i));
		if(i % 8 == 0)
			printf(" ");
	}
	printf("\n");
}
#endif
#if 0
//toggle a bit
int main()
{
	int num, pos;
	int i;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the position to toggle\n");
	scanf("%d",&pos);
	printf("after toggle the number is\n");
	num = num ^ (1 << pos);
	for(i=31; i>=0 ;i--) {
		printf("%d",1 & (num >> i));
		if(i % 8 == 0)
			printf(" ");
	}
	printf("\n");
}
#endif
//swap nibble
#if 0
int main()
{
	int num, i, j;
	int l, r;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("before swaping nibble\n");
	for(i=31; i>=0 ;i--) {
		printf("%d",1 & (num >> i));
		if(i % 8 == 0)
			printf(" ");
	}
	printf("\n");
	for(i=0, j=31;i<4, j>27;i++, j--) {
		l = num & (1 << i);
		r = num & (1 << j);
		if (l != r) {
			num = num ^ (1 << i);
			num = num ^ (1 << j);
		}
	}
	printf("after swaping nibble\n");
	for(i=31; i>=0 ;i--) {
		printf("%d",1 & (num >> i));
		if(i % 8 == 0)
			printf(" ");
	}
	printf("\n");
}
#endif
#if 0
//program on right rotate
int main()
{
	unsigned int num;
	int i, l, n;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the number of rotations\n");
	scanf("%d",&n);
	for(i=0; i<n; i++) {

		l = num & 1;
		num = (num >> 1) | (l << 31);
	}
	for(i=31; i>=0 ;i--) {
		printf("%d",1 & (num >> i));
		if(i % 8 == 0)
			printf(" ");
	}
	printf("\n");
}
#endif
#if 0
//program on left rotate
int main()
{
	unsigned int num;
	int i, r, n;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the number of rotations\n");
	scanf("%d",&n);
	for(i=0; i<n; i++) {

		r = (num >> 31) & 1;
		num = (num << 1) | r;
	}
	for(i=31; i>=0 ;i--) {
		printf("%d",1 & (num >> i));
		if(i % 8 == 0)
			printf(" ");
	}
	printf("\n");
}
#endif
#if 1
// even or odd number
int main()
{
	int num;
	printf("enter the number \n");
	scanf("%d",&num);
	(num & 1) ? printf("odd number\n") : printf("even number \n");
}
#endif









