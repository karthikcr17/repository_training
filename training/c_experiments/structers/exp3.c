#include<stdio.h>
struct st 
{
	int a:3;
	int b:10;
	int c:10;
	int d:10;
};
int main()
{
	struct st s;
	printf("%d\n",sizeof(struct st));
//	printf("%p\n",&s.a);

	return 0;
}


