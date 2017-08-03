
/* this function compare two strings by ignoring cases return -1, 0, 1 */

#include "header.h"

int casecmp(char *str1, char *str2)
{

	while((((*str1 == *str2) || ((*str1 ^ 32) == *str2))
							|| (*str1 == (*str2 ^ 32))) && (*str1)) { 

			str1++;
			str2++;
	}

	if((*str1 > *str2) && ((*str1 ^ 32) > *str2))
			return 1;
	else if((*str1 ^ 32) < (*str2 ^ 32))
			return -1;
	else if((*str1 < *str2) && (*str1 < (*str2 ^ 32)))
			return -1;
	else if((*str1 ^ 32) > (*str2 ^ 32))
			return 1;
	else
		return 0;
}

