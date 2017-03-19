#include<stdio.h>

int main()
{

	int a[3][2] = {10, 20, 30, 40, 50, 60};

	printf("&a = %p \n",&a);

	printf("a+0 = %p \n",a + 0);
	printf("a+1 = %p \n",a + 1);
	printf("a+2 = %p \n",a + 2);

	
	printf("*(a+0) = %p \n",*(a + 0));
	printf("*(a+1) = %p \n",*(a + 1));
	printf("*(a+2) = %p \n",*(a + 2));

	printf("*(*(a+0)) = %d \n",*(*(a + 0)));
	printf("*(*(a+1)) = %d \n",*(*(a + 1)));
	printf("*(*(a+2)) = %d \n",*(*(a + 2)));

	return 0;
}

