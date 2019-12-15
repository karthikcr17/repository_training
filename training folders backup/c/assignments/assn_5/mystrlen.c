#include <stdio.h>

int mystrlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i ++);
	
	return i;
}
