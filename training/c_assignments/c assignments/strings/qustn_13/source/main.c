
/* program on string is rotate string of given string or not */

#include "header.h"

int main()
{
	char *str = NULL; /* stores the given string */
	char *rstr = NULL; /* stores the rotate string */
	int ret;   /* stores the return value */
	char sizes[MAX];
	int size; /* stores the size of string */

	printf("enter the size of strings\n");
	fgets(sizes, MAX, stdin);

	if(sizes == NULL) {
		printf("fgets failed \n");
		return 0;
	}

	size = myatoi(sizes);

	if(size == 0) {
		printf("enter the correct size \n");
		return 0;
	}

	if(NULL == (str = (char *)malloc(sizeof(char) * size))) {
		printf("malloc is failed \n");
		exit(0);
	}

	if(NULL == (rstr = (char *)malloc(sizeof(char) * size))) {
		printf("malloc is failed \n");
		exit(0);
	}
	
	printf("enter the string str \n");
	fgets(str, size, stdin);
	
	if(str == NULL) {
		printf("fgets failed \n");
		return 0;
	}

	*(str + strlen(str) - 1) = '\0';
	
	printf("enter the string rstr \n");
	fgets(rstr, size, stdin);

	if(rstr == NULL) {
		printf("fgets failed \n");
		return 0;
	}

	*(rstr + strlen(rstr) - 1) = '\0';

	ret = strrot(str, rstr);

	if(ret == 0)
		printf("rstr is rotate string of str \n");
	else
		printf("rstr is not rotate string of str \n");

	return 0;
}

	
