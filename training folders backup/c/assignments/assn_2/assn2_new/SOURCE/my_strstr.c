#include <stdio.h>
     

char* my_strstr(char *p, char *q)                                               
{                  
	int i;
	int j;
	
	for(i = 0; *(p + i); i++){
		if (*(p + i) == *q){
			for (j = 1; *(q + j); j++){
				if( *(p + i + j) == * (q + j)) {
					continue;
				} else {
					break;
				}
			}
                                                                   
			if (q[j] == '\0')
				return p+i;
		}                                                                       }      
                                                                     
    return NULL;
}                                                                               
  
