#include "header.h"

int main()
{

	char *buf;   /*it stores the given string */
	char ch;    /* it stores the character to search */
	char sizes[MAX]; /* it stores the size of string */
	int size;		/* it stores the size of string in integer */
	char *ret;  /* it stores the return address */
	char ch1[MAX];	

	printf("enter the size of the string \n");
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
	if(NULL == (buf = (char *)malloc(sizeof(char) * size))) {                   
		printf("Malloc for src failed \n"); /* checking malloc is             
							   allocate storage or not */        
		exit(0);                                                            
	}                                   

	printf("enter the string \n");
	fgets(buf, size, stdin);

	*(buf + str_len(buf) - 1) = '\0';

	printf("enter the character to search \n");
	fgets(ch1, MAX, stdin);

	if (ch1 == NULL) { /* checking fgets is reads the string or not */        
		printf ("fgets failed\n");                                              
		return 0;                                                               
	}                   

	if(strlen(ch1) != 2) {
		printf("enter one character \n");
		free(buf);
		return 0;
	}

	ch = *ch1;

	ret = chr_add_instr(buf, ch);

	if(ret == NULL)
		printf("character not in string \n");
	else {

		printf("the character occurance at address : %p \n",ret);
		printf("the character accurance at position : %d \n",
				(ret - buf + 1));
	}


	free(buf);

	return 0;
}

