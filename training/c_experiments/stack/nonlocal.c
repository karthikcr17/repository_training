#include<stdio.h>

int a=0;
void fun()
{
	int a=10;
	void fun1()
	{
		a=11;
		printf("hello\n");
	}
	fun1();
	printf("%d\n",a);
}

int main() {
	fun();
	printf("%d\n",a);
	return 0;
}
	

