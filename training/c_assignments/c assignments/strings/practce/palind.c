#include<stdio.h>
#include<malloc.h>

int palindrom(char *);

int main()
{

	char *str;
	char p[10];
	int ret;
	int N;
	int size;

	printf("enter the size of the string \n");
	fgets(p, 10, stdin);

	N = valid(p);
	if(N == 0) {
		printf("enter the correct size \n");
		main();
	}
	else {

		str = (char *)malloc(sizeof(char)*N);

		 printf("enter the string\n");
	   fgets(str, N, stdin);

	printf("%s\n",str);
/*

	   size = size(str, N)

		   if(size != 0) {
			   printf("enter the string with inthe size %d \n",N - 2);
		   }
		   else {

			   ret = palindrom(str);

			   if(ret != 0)
				   printf("the string is palindrom \n");
			   else
				   printf("the string is not palindraom \n");
	*/	   
	}
	return 0;
}

int palindrom(char *str)
{

	int length;
	int i;
	int j;

	for(i = 0; str[i]; i++);
	
	length = i - 1;

	for(i = 0, j = length - 1; j > i; i++, j--) {
			if(str[i] == str[j])
				continue;
			else
				return 0;
	}
	return 1;
} 
