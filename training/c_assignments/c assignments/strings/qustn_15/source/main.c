
/* insert character in string at given position in string */

#include "header.h"

int main()
{
	char *str = NULL; /* stores the given string */
	char ch;  /* it stores the given character */
	char sizes[MAX]; /* it stores the sizes buffer */
	int size;	/* it stores the size of string */
	int pos;  /* it stores the position to insert */
	char poss[MAX];

	printf("enter the size of string \n");
	fgets(sizes, MAX, stdin)

	if(sizes == NULL) { /* fgets validation */
		printf("fgets is failed \n");
		return 0;
	}

	size = myatoi(sizes); /* calling myatoi function */

	if(size == 0) { /* checking validation of integer */
		printf("enter the correct size \n");
		return 0;
	}

	 if(NULL == (str = (char *)malloc(sizeof(char) * size))) {                  
        printf("Malloc for src failed \n"); /* checking malloc is               
                              allocate storage or not */                        
        exit(0);                                                                
    }                       

	printf("enter the string \n");
	fgets(str, size, stdin);

	if(str == NULL) { /* fgets validation */
		printf("fgets is failed \n");
		return 0;
	}

	*(str + str_len(str) + 1) = '\0';
 
	printf("enter position where insert \n");
	fgets(poss, MAX, stdin);

	if(poss == NULL) {  /* fgets validation */                                                       
        printf("fgets is failed \n");                                           
        return 0;                                                               
    }                                                                           
                                                                                
	pos = myatoi(poss); /* calling myatoi function */                                                      
                                                                                
    if(pos == 0) {                                                             
        printf("enter the correct size \n");                                    
        return 0;                                                               
    }          

	printf("enter the character to insert \n");
	ch = getchar();

	insertchar(str, ch, pos); /* calling insetchar function */

	printf("after insert the character the string is \n");
	printf("%s\n",str);

	free(str);

	return 0;
}








