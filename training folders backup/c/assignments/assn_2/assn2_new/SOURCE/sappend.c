#include <stdio.h>
char *sappend(char *str1, char *str2)
{

	char *ptr3 = NULL;

	ptr3 = str2;
	while(*str2++ != '\0');
	str2 = str2 - 1;
	while ((*str2++ = *str1++) != '\0');

	return ptr3;
}
char *snapped(char *str1, char *str2, int n)
{
	int i = 0;
	char *ptr = str2;
	while(*str2++ != '\0');
	
	str2 = str2 - 1;
  
	while((i < n) && ((*str2++ = *str1++) != '\0')) {
		i++;
	}
	return ptr;
}
