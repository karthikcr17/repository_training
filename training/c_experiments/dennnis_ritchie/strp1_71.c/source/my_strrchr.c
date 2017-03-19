#include "header.h"

int my_strrchr(char *str, char ch)
{

	int i;

	while(*(str + i))
		i++;

	while(i >= 0) {
		if(*(str + i) == ch)
			return i;
		else
			i--;
	}

	return -1;
}
	
