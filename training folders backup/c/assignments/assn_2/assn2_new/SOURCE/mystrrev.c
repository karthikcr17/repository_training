#include <stdio.h>
#include "../HEADER/mystring.h"

char* mystrrev (char *str)
{
	int i;
	char temp;
	int len;

	len = mystrlen (str);
	for (i = 0; i <= len / 2 ; i++) { 
		temp = *(str + i);
		*(str + i) = *(str + len - i - 1);
		*(str + len - i - 1) = temp;
	}

	printf ("%s",str);
	return str;
}
