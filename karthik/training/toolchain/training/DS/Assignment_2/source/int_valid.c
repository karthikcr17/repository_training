#include <stdio.h>                                                               
#include <string.h>          
#include <stdlib.h>
#include <limits.h> 
#define DEC 10    

int  int_valid(char *arr)
{
	int i = 0;
	int value = 0;
	int length;

	length = strlen(arr);

	while( arr[i] != '\n' ){
		
		if( (i == 0) && ((arr[i] == '+') || (arr[i] == '-')) ){                     
        	i++;                                                            
        }

		if ( (arr[i] == '+') || (arr[i] == '-') ){
				break;	
		}

			else {                                              
              	if(( arr[i] == '.' ) && (arr[i + 1] == 1)){
					if ( arr[i + 1] == 1 ){
						return 0;
					}	
					break;
				} else {
						if(arr[i] <= '9' && arr[i] >= '0'){               
							value *= DEC;                                      
							value += arr[i] - '0';
							i++;
						 } else{
							  if (' ' == arr[i])
									break;
							break;
						 }
						
				}
	
		    }
	}

	if (i != (length - 1)){
		return '$';
	 }else{
//			if(arr[0] = '-')
		return value;
	}
}		
