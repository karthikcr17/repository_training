
#include "header.h"

void squeezstr(char *str)
{

	char ch;
	int i = 0;
	int	j = 0;

	ch = *str;
	*(str + j++) = ch;	

	while(*(str + i)) {

		if(ch != *(str + i)) {
			ch = *(str + i);
			*(str + j++) = ch;
		}
	
	i++;
	}
	
	*(str + j) = '\0';
	
	
}
