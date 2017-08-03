
#include "header.h"

int main()
{

	char *str = NULL;
	char sizes[MAX];
	int ret;
	int size;

	printf("enter the size of the string \n");
	fgets(sizes, MAX, stdin);

	if(sizes == NULL) {
		printf("fgets is failed \n");
		return 0;
	}
	size = myatoi(sizes);

	if(size == 0) {
		printf("enter the correct size \n");
		return 0;
	}

	str = (char *)malloc(sizeof(char) * size);

	if(str == NULL) {
		printf("malloc is failed \n");
		return 0;
	}

	printf("enter the string\n");
	fgets(str, size, stdin);

	*(str + strlen(str) - 1) = '\0';

	if(str == NULL) {
		printf("fgets is failed \n");
		return 0;
	}

	ret = palindrom(str);

	if(ret == 0)
		printf("the string is palindrom \n");
	else
		printf("the string is not palindraom \n");



return 0;
}


