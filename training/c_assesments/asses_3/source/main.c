#include "header.h"

int main()
{

	char *str = NULL; /* this stores the given string */
	
	if(NULL == (str = (char *)malloc(sizeof(char) * MAX))) { /* checking 
										malloc is allocated space or not */
			printf("malloc is failed to allocate space \n");
			exit(0);
	}

	printf("enter the string \n");
	fgets(str, MAX, stdin);

	*(str + str_len(str) - 1) = '\0';

	if(str == NULL) { /* checking fgets is taken the input or not */ 
		printf("the fgets is failed to allocate space \n");
		return 0;
	}

	str = revwords(str);

	printf("after reversing the string is \n");
	printf("%s\n",str);

	free(str);

	return 0;
}


