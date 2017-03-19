#include "header.h"

int main()
{

	char *str = NULL;
	double res = 0;

	if(NULL == (str = (char *)malloc(sizeof(char) * MAX))) {
		printf("malloc is failed\n");
		exit(1);
	}

	printf("enter the number\n");
	fgets(str, MAX, stdin);

	*(str + strlen(str) - 1) = '\0';
	
	res = my_atof(str); 

	if(res == -1)	
		printf("invalid number \n" );
	else
		printf("equvalant number %lf \n",res);

	free(str);
	str = NULL;

	return 0;
}

	
