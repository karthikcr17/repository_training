
#include "header.h"

int mystrcasecmp(char *str1, char *str2) /*this function compare two strings */
{
	int leng = 0;
	int i = 0 ;

	leng = strlen(str1);	

	while(((((*str1 == *str2) || (*str1 ^ 32) == *str2)) || 
				(*str1 == (*str2 ^ 32))) && (i < leng)) {

		str1++;
		str2++;
		i++;
	}

	if((*str1 > *str2) && ((*str1 ^ 32) >  *str2))
		return 1;
	else if((*str1 ^ 32) < (*str2 ^ 32))
		return -1;
	if((*str1 < *str2) && (*str1 <  (*str2 ^ 32)))
		return -1;
	else if((*str1 ^ 32) > (*str2 ^ 32))
		return 1;
	else if(i == leng) 
		return 0;        

}


