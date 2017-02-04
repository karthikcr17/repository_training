
#include "header.h"

int main()
{
	char *str = NULL;
	char *rstr = NULL;
	int ret;
	char sizes[MAX];
	int size;

	printf("enter the size of strings\n");
	fgets(sizes, MAX, stdin);

	if(sizes == NULL) {
		printf("fgets failed \n");
		return 0;
	}

	size = atoi(sizes);

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

	
