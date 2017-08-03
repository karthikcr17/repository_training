
#include "header.h"

size_t mystrspn(char *str1, char *str2) 
{

	int i = 0;
	int j = 0; 
	size_t count = 0; 


	for(i = 0; str1[i]; i++) {
		for(j = 0; str2[j]; j++) {
			if(str1[i] == str2[j]) {
				count = count + 1;
				break;
			}	
		}
	if(str2[j] == '\0') 
	return count;
	}	
	if(str1[i] == '\0')
	return count;

}
	


