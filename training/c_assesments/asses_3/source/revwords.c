/* this program is reversing a words in given sentance */

#include "header.h"

char *revwords(char *str)
{

	char *temp = NULL;
	int j = 0;
	int k = 0;
	int i = 0;
	int len = 0;

	if(NULL == (temp = (char *)malloc(sizeof(char) * MAX))) { /* allocating
											space to temp and checking */
		printf("malloc is failed to allocate space \n");
		exit(0);
	}

	len = str_len(str);

	i = len - 1;

	while(i >= 0) {
		if((*(str + i) == ' ') || (i == 0)) {
			if(i == 0) 
				while((*(str + i + k) != ' ') && *(str + i + k)){
					*(temp + j) = *(str + i + k);
					k++;
					j++;
			}
			else 	
				while((*(str + i + k + 1) != ' ') && 
												*(str + i + k + 1)) {
					*(temp + j) = *(str + i + k + 1);
					k++;
					j++;
				}
			*(temp + j++) = ' ';
			k = 0;
		}
		i--;
	}
	*(temp + j) = '\0';
	str = temp;
	return temp;
}


