
#include "header.h"

int palindrom(char *str)
{

	int i = 0;
	int j = 0;

	j = strlen(str) - 1;

	while(i < j) {
		if(*(str + i) != *(str + j)) 
				return 1;
	i++;
	j--;
	}
	return 0;
}
	
