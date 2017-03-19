#include "header.h"

int main()
{

	char *str = NULL;
	char ch;
	int res;

	if(NULL == (str = (char *)malloc(sizeof(char) * MAX))) {
		printf("malloc is failed\n");
		exit(1);
	}

	printf("enter the string\n");
	fgets(str, MAX, stdin);
	
	printf("enter the charcter to search\n");
	ch = getchar();

	res = my_strrchr(str, ch); 

	if(res != -1)	
		printf("the charcter is present at this pos %d \n",(res + 1));
	else
		printf("character is not present in string \n");

	free(str);
	str = NULL;

	return 0;
}

	
