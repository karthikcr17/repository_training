# include <stdio.h>
# include <string.h>
/*
int myatoi (char *str)                                                          
{                                                                               
    int i = 0;                                                                  
    int n = 0;                                                                  
                                                                                
    if (*str == '-' || *str  == '+') {                                                        
        i++;                                                                    
    }                                                                           
                                                                                
	while (*(str + i) != '\n') {
		if (*(str + i) >= '0' && *(str + i) <= '9') {
	        n = 10 * n + ( str[i] - '0') ;
			i++;
		} else {
			printf ("\nInvalid input");
			return 0;
   		}
	}
    if (str[0] == '-') {
        n = - n;
    }                                                                    
    return n;                                                                   
}*/
int myatoi(char *arr)                                                          
{                                                                               
    int value = 0;                                                              
    int i ;                                                                     
    int length;                                                                 
    i = 0;                                                                      
    length = strlen(arr);                                                    
                                                                                
    while(arr[i] != '\n')   {                                                   
        if (arr[i] == '+' || arr[i] == '-') {                                   
            i++;                                                                
        } else  {                                                               
            if(arr[i] == '.') {                                                 
                return 0;                                                       
            } else {                                                            
                while(arr[i] != '\n') {                                         
                    if(arr[i] >= 48 && arr[i] <= 57) {                          
                        value *= 10;                                            
                        value += arr[i] - 48;                                   
                        i++;                                                    
                    } else {                                                    
                        printf("Invalid input..! Please enter valid input\n");  
                        return 0;                                               
                    }                                                           
                }                                                               
            }                                                                   
        }                                                                       
                                                                                
        if(i == length ) {                                                      
            printf("%d\n", value);                                              
            return value;                                                       
        } else  {                                                               
            printf("Invalid input PLEASE ENTER VALID INPUT \n");                
            return 0;                                                           
        }                                                                       
    }                                                                           
    return 0;                                                                   
}                                               
