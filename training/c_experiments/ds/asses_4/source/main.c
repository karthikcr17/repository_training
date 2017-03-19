
#include "header.h"

int main()
{

	root = NULL;
	char op[MAX];
	
	while(1) {

		printf("enter the option \n");
		printf("1.insertion\n");
		printf("2.deletion\n");
		printf("3.diplay\n");
		printf("4.exit\n");
	
		fgets(op, MAX, stdin);
		*(op + strlen(op) - 1) = '\0';

		switch(atoi(op)) {
				
			case 1: 
					insertion(&root);
					break;
			case 2:
					deletion(&root);
					break;
			case 3:
					display(root);
					break;
			case 4: 
					exit(1);

			default: printf("enter the correct option\n");
		}
	}
	return 0;
}
			
			
