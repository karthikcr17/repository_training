#include "header.h"

int main()
{

	char *buf1 = NULL; /* it stores the string str1*/ 
	char *buf2 = NULL; /* it stores the string str2 */
	int size;      /* it stores the size of strings */
	char sizes[MAX]; /* it stores the  string */
	size_t size_tn; /* it stores the ret value */

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

	if(NULL == (buf1 = (char *)malloc(sizeof(char) * size))) {                  
		printf("Malloc for src failed \n"); /* checking malloc is               
							  allocate storage or not */        
		exit(0);                                                                
	}

	if(NULL == (buf2 = (char *)malloc(sizeof(char) * size))) { 
		printf("Malloc for src failed \n"); /* checking malloc is               
							  allocate storage or not */        
		exit(0);                                                                
	}                                                   

	printf("enter the buf1 \n");
	fgets(buf1, size, stdin);

	if (buf1 == NULL) { /* checking fgets is reads the string or not */        
		printf ("fgets failed\n");                                              
		return 0;        
	}

	*(buf1 + strlen(buf1) - 1) = '\0';

	printf("enter the buf2 \n");
	fgets(buf2, size, stdin);

	if (buf2 == NULL) { /* checking fgets is reads the string or not */        
		printf ("fgets failed\n");                                              
		return 0;         
	}

	*(buf2 + strlen(buf2) - 1) = '\0';
	
	 size_tn = mystrspn(buf1, buf2);

	printf("buf1 accepts the buf2 this characters : \n");
	printf("%d\n",size_tn);

	free(buf1);
	free(buf2);

	return 0;
}


