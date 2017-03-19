#include "header.h"

int main()
{

	char *str1 = NULL; /* it stores the string str1*/ 
	char *str2 = NULL; /* it stores the string str2 */
	int size;      /* it stores the size of strings */
	char sizes[MAX]; /* it stores the  string */
	int ret; /* it stores the ret value */

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

	if(NULL == (str1 = (char *)malloc(sizeof(char) * size))) {                  
		printf("Malloc for src failed \n"); /* checking malloc is               
							  allocate storage or not */        
		exit(0);                                                                
	}

	if(NULL == (str2 = (char *)malloc(sizeof(char) * size))) { 
		printf("Malloc for src failed \n"); /* checking malloc is               
							  allocate storage or not */        
		exit(0);                                                                
	}                                                   

	printf("enter the str1 \n");
	fgets(str1, size, stdin);

	if (str1 == NULL) { /* checking fgets is reads the string or not */        
		printf ("fgets failed\n");                                              
		return 0;        
	}

	*(str1 + strlen(str1) - 1) = '\0';

	printf("enter the str2 \n");
	fgets(str2, size, stdin);

	if (str2 == NULL) { /* checking fgets is reads the string or not */        
		printf ("fgets failed\n");                                              
		return 0;         
	}

	*(str2 + strlen(str2) - 1) = '\0';
	
	ret = mystrcmp(str1, str2);

	if(ret == 0)
		printf("the both strings str1 and str2 are equal \n");
	else if(ret == 1)
		printf("the str1 is grater than str2 \n");
	else
		printf("the str1 is less than str2 \n");


	free(str1);
	free(str2);

	return 0;
}


