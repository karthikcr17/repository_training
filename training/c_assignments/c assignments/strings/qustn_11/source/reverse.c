
#include "header.h"

void reverse(char *str)
{
	
	char temp;
	int i = 0;
	int j = 0;

	j = strlen(str) - 1;

	while(i < j) {
		
		temp = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = temp; 
	i++;
	j--;
	}
}
	
