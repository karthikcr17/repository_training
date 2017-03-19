#include<stdio.h>
#include<math.h>
//int power(int , int);
int main()
{

	unsigned int n = 2016;
	 int num = 0;
	int i;

	read(0, &n, sizeof(n));


	for(i = 0; i < 32; i++);
		num = num + ((n & (1 << i)) * pow(2, i));

	printf("pow %lf\n",pow(2, 3));

	printf("num %d\n",num);

	n = num + 1;

	write(1, &n, sizeof(n));

	return 0;
}

int power(int num, int n)
{

	int i = 0;
	int N = 1;

	for(i = 0; i < n; i++)
		N = N * num;

	return N;
}
