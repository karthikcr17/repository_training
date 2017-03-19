
#include "header.h"

int main()
{

	root = NULL;
	char op[MAX];
	
	while(1) {

		printf("enter the option \n");
		printf("1.insertion\n");
		printf("2.pre_order\n");
		printf("3.post_order\n");
		printf("4.in_order\n");
		printf("5.deletion\n");
		printf("6.exit\n");
	
		fgets(op, MAX, stdin);
		*(op + strlen(op) - 1) = '\0';

		switch(atoi(op)) {
				
			case 1: 
					insertion(&root);
					break;
			case 2:
					pre_order(root);
					break;
			case 3:
					post_order(root);
					break;
			case 4:
					in_order(root);
					break;
			case 5:
					deletion(&root);
					break;
			case 6: 
					exit(1);

			default: printf("enter the correct option\n");
		}
	}
	return 0;
}
			
			
