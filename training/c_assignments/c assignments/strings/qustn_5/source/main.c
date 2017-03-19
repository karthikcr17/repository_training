#include "header.h"

int main()
{

	char *str1 = NULL; /* it stores the string str1*/ 
	char *str2 = NULL; /* it stores the string str2 */
	int size;      /* it stores the size of strings */
	char sizes[MAX]; /* it stores the  string */
	char NO_chrs[MAX];
	int NO_chr; /* it stores the no.of characters to append */

	printf("enter the size of string \n");
	fgets(sizes, MAX, stdin);

	if (sizes == NULL) { /* checking fgets is reads the string or not */    
		printf ("fgets failed\n");          
		return 0;                                                                   }

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

	printf("enter the number of characters to append \n");
	fgets(NO_chrs, MAX, stdin);
	
	if (str1 == NULL) { /* checking fgets is reads the string or not */        
		printf ("fgets failed\n");                                              
		return 0;        
	}

	NO_chr = myatoi(NO_chrs);
	
	str2 = mysnappend(str1, str2, NO_chr);

	printf("after append n characters from str1 the string is \n");
	printf("%s\n",str2);

	free(str1);
	free(str2);

	return 0;
}

	










