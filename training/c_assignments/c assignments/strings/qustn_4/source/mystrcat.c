#include "header.h"

char *mysappend(char *str1, char *str2)
{

	char *temp = NULL;

	temp = (char *)malloc(sizeof(char) * MAX);

	temp = str2;

	while(*str2++);

	str2--;

	while(*str1) 
		*str2++ = *str1++;
	
	str2 = '\0';

	return temp;
}


	 
