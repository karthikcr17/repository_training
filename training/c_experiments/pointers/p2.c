#include<stdio.h>

int main()
{

	int a[5] = {0,1,2,6,4};

	printf("a = %p\n",a);
	printf("*a = %d\n",*a);
	printf("&a = %p\n",&a);
	printf("*a++ = %d\n",*a);

	printf("a+1 = %p\n",a+1);


	printf("&a+1 = %p\n",&a + 1);

	printf("a+4 = %p\n",a + 4);
	
	printf("a[0] = %d\n",a[0]);
	printf("a[1] = %d\n",a[1]);
	printf("a[2] = %d\n",a[2]);
	printf("a[3] = %d\n",a[3]);
	printf("a[4] = %d\n",a[4]);

	printf("*(a + 0) = %d\n",*(a + 0));
	printf("*(a + 1) = %d\n",*(a + 1));
	printf("*(a + 2) = %d\n",*(a + 2));
	printf("*(a + 3) = %d\n",*(a + 3));
	printf("*(a + 4) = %d\n",*(a + 4));

	printf("*a + 0 = %d\n",*a + 0);
	printf("*a + 1 = %d\n",*a + 1);
	printf("*a + 2 = %d\n",*a + 2);
	printf("*a + 3 = %d\n",*a + 3);
	printf("*a + 4 = %d\n",*a + 4);
	
	printf("%d\n",(a + 3) - (a + 1));

	*(a + 3) = 5;

	printf("*(a + 3) = %d\n",*(a + 3));
	printf("a[3] = %d\n",a[3]);

	return 0;
}
