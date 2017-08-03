#include "header.h"

int main()
{
	char sizes[MAX];
	char NO[MAX];
	int NOCHAR;
	int size; /*size of string */
	char *str = NULL;
	char *dst = NULL;

	printf("enter the size of string \n");
	fgets(sizes, MAX, stdin);

	if (sizes == NULL) { /* checking fgets is reads the string or not */
		printf ("fgets failed\n");
		return 0;
	}

	size = myatoi(sizes);

	if(size == 0){
		printf("enter the correct size \n");
		main();
	}
	if(NULL == (str = (char *)malloc(sizeof(char) * size))) {
		printf("Malloc for src failed \n"); /* checking malloc is
								 allocate storage or not */
			exit(0);
	}																			
	if (NULL == (dst = (char *)malloc(sizeof(char) * size))) {
		printf("malloc for dst failed \n"); /* checking malloc is 
								 allocate storage or not */
		exit(0);
	}

	printf("enter the source string \n");
	fgets(str, size, stdin);
	if (str == NULL) {
		printf ("fgets failed\n");
		return 0;
	}

	*(str + str_len(str) - 1) = '\0';

	printf("enter the number of characters copy \n");
	fgets(NO, MAX, stdin);

	if (NO == NULL) {
		printf ("fgets failed\n");
		return 0;
	}

	NOCHAR = myatoi(NO);

	if(NOCHAR == 0) {
		printf("enter the correct no.of characters \n");
		return 0;
	}


	mystrncpy(dst, str, NOCHAR); /*passing to the arguments to fun mystrncpy */
												

	printf("the destination string is \n");
	printf("%s\n",dst);

	free(str); /* free the storage of str dst */
	free(dst);

	return 0;
}


