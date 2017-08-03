
/* this function insert a character at given position in string */

#include "header.h"

void insertchar(char *str, char ch, int pos)
{

	int i = 0;

	int len = str_len(str);

	while(len >= pos) {

		*(str + len + 1) = *(str + len);
		len--;
	}
	
	*(str + pos) = ch;
}



