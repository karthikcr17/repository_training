
#include "header.h"

int strrot(char *str, char *rstr)
{

	int i = 0;
	int j = 0;
	int k = 0;

	int L1 = strlen(str);
	int L2 = strlen(rstr);
	
	if(L1 != L2)
		return 1;

	for(j = 0; str[j]; j++) {
		if(rstr[0] == str[j]) {
			if(j >= (L1 - 1))
				k = 0;
			else 
				k = j + 1;
					
			for(i = 1; rstr[i]; i++) {
				if(rstr[i] != str[k])
					break;

				if(k >= (L1 - 1))
					k = 0;
				else
					k++;
			}
		}
	if(rstr[i] == '\0')
		return 0;
	}
	return 1;
}
						
		

