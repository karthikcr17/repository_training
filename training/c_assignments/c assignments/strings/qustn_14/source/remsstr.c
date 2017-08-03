/* this program remove substring from main string */

#include "header.h"

char *remsstr(char *str,char *sstr)
{

	int i = 0;
	int j = 0;
	int k = 0;

	while(*(str + i)) { 
		if(*(sstr + j) == *(str + i)) {
			while(*(sstr + j)) {
				if(*(str + i + j) != *(sstr + j)) 
					break;
				j++;
			}

			if(*(sstr + j) == '\0') {
				while(*(str + i + j + k)) {
					*(str + i + k) = *(str + i + j + k);
					k++;
				}
				*(str + i + k) = '\0';
			}
			if(i == 0){
				i = 0;
				j = 0;
				k = 0;
				continue;
			}
		}

		k = 0;
		j = 0;
		i++;
	} 

	return str;
}








