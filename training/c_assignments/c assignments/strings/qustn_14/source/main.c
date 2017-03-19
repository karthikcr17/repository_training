/* program on remove substring from main string */

#include "header.h"

int main()
{

	char *str = NULL; /* it stores the string str1*/ 
	char *sstr = NULL; /* it stores the string str2 */
	int size;      /* it stores the size of strings */
	char sizes[MAX]; /* it stores the  string */

	printf("enter the size of string \n");
	fgets(sizes, MAX, stdin);

	if (sizes == NULL) { /* checking fgets is reads the string or not */    
		printf ("fgets failed\n");          
		return 0;        
	 }

	size = myatoi(sizes); // calling myatoi function 

	if(size == 0) {  /* checking valid integer or not */                                                          
		printf("enter the correct size \n\n");                                  
		return 0;                                                               
	}             

	if(NULL == (str = (char *)malloc(sizeof(char) * size))) {                  
		printf("Malloc for src failed \n"); /* checking malloc is               
							  allocate storage or not */        
		exit(0);                                                                
	}

	if(NULL == (sstr = (char *)malloc(sizeof(char) * size))) { 
		printf("Malloc for src failed \n"); /* checking malloc is               
							  allocate storage or not */        
		exit(0);                                                                
	}                                                   

	printf("enter the str \n");
	fgets(str, size, stdin);

	if (str == NULL) { /* checking fgets is reads the string or not */        
		printf ("fgets failed\n");                                              
		return 0;        
	}

	*(str + str_len(str) - 1) = '\0';

	printf("enter the sstr \n");
	fgets(sstr, size, stdin);

	if (sstr == NULL) { /* checking fgets is reads the string or not */        
		printf ("fgets failed\n");                                              
		return 0;         
	}

	*(sstr + str_len(sstr) - 1) = '\0';
	
	 str = remsstr(str, sstr); /* calling remsstr function */

	printf("after remove sub string the string : \n");
	printf("%s\n",str);

	free(str);
	free(sstr);

	return 0;
}


