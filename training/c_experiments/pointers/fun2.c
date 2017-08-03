#include<stdio.h>

void fun2(int *add,int *sub,int *mul,int num1,int num2);

int main()
{

	int num1 = 10;
	int num2 = 20;

	int add;
	int sub;
	int mul;


	fun2(&add, &sub, &mul, num1, num2);

	printf("add of two numbers = %d\n",add);
	printf("sub of two numbers = %d\n",sub);
	printf("mul of two numbers = %d\n",mul);

}

void fun2(int *add,int *sub,int *mul,int num1,int num2)
{

	*add = num1 + num2;
	*sub = num1 - num2;
	*mul = num1 * num2;
}
