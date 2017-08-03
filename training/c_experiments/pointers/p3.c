
#include<stdio.h>

int main()
{

	int *p = 10;

	
	int arr[4] = {10,20,3,40,};
	int *p = NULL;
	int (*ptr)[4];

	printf("%d\n",sizeof(ptr));

	p = arr;
	ptr = &arr;

	printf("%d\n",sizeof(ptr));

	printf("p = %p \n",p);
	printf("ptr = %p \n",ptr);
	printf("ptr = %d \n",**ptr);
	printf("ptr[3] = %d \n",*(*ptr + 3));
	printf("p+3 = %d \n",*(p + 3));

	printf("adress of 40 %p \n",p + 3);
	printf("value of 3 ele %d \n",*(*ptr + 3));

	p++;
	ptr++;

	printf("p = %p \n",p);
	printf("ptr = %p \n",ptr);

	return 0;
}

