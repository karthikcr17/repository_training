#include "header.h"

char *mysnappend(char *str1, char *str2, int n) /*this function to append
                                      n characters from str1 to str2 */
{

	int i = 0;

	char *temp = NULL;

	temp = (char *)malloc(sizeof(char) * MAX);

	temp = str2;

	while(*str2++);

	str2--;

	while(*str1 && i<n) {
		*str2++ = *str1++;
		++i;
	}
	
	str2 = '\0';

	return temp;
}


	 
