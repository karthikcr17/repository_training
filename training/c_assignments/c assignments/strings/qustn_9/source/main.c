#include "header.h"

int main()
{

	char *buff = NULL;
	char *delim = NULL;
	char sizes[MAX];
	int size;
	char *ret = (char *)malloc(32);
	
	printf("enter the size of string \n");                                      
    fgets(sizes, MAX, stdin);                                                   
                                                                                
    if (sizes == NULL) { /* checking fgets is reads the string or not */        
        printf ("fgets failed\n");                                              
        return 0;                                                               
     }                                                                          
                                                                                
    size = myatoi(sizes);                                                       
                                                                                
    if(size == 0) {                                                             
        printf("enter the correct size \n\n");                                  
        return 0;                                                               
    }                        
	
	if(NULL == (buff = (char *)malloc(sizeof(char) * size))) {                  
        printf("Malloc for src failed \n"); /* checking malloc is               
                              allocate storage or not */                        
        exit(0);                                                                
    } 
	
	printf("enter the buff \n");                                                
    fgets(buff, size, stdin);                                                   
                                                                                
    if (buff == NULL) { /* checking fgets is reads the string or not */         
        printf ("fgets failed\n");                                              
        return 0;                                                               
    }                                                                           
                                                                                
    *(buff + strlen(buff) - 1) = '\0';            

	if(NULL == (delim = (char *)malloc(sizeof(char) * size))) {                  
        printf("Malloc for src failed \n"); /* checking malloc is               
                              allocate storage or not */                        
        exit(0);                                                                
    } 
	
	printf("enter the delim \n");                                                
    fgets(delim, size, stdin);                                                   
                                                                                
    if (delim == NULL) { /* checking fgets is reads the string or not */         
        printf ("fgets failed\n");                                              
        return 0;                                                               
    }                                                                           
                                                                                
    *(delim + strlen(delim) - 1) = '\0';            
	
	ret =  mystrtok(buff, delim);
	//*ret = '\0';

	printf("string after first delimiter occured \n");
	printf("%s\n",ret);

	free(buff);
}                                                                       
    
     
