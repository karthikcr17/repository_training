#include<stdio.h>
#include<stdlib.h>
void fun(int *);

int main()
{
	int a[2][2];
	int i;
	int j;

	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++)
			scanf("%d",&a[i][j]);
	}
	fun(a);
	return 0;
}
void fun(int *q) 
{
	int **p;
	int i = 0;
	int j;

	p = (int **)malloc(sizeof(int *) * 2);
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++)
			*(p + i) = (int *)malloc(sizeof(int) * 2);
	}
	p = (int **)q;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++)
			printf("%d\n",(*(p + i) + j));
	}

}




		
