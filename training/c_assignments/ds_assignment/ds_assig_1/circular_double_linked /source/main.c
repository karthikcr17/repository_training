#include "header.h"

int main()
{

	head = NULL;
	char op[MAX];
	int opp;
	
	while(1) {

		printf("enter the option \n");
		printf("1.insertion\n");
		printf("2.deletion\n");
		printf("3.display\n");
		printf("4.exit\n");
	
		fgets(op, MAX, stdin);
		*(op + strlen(op) - 1) = '\0';

		opp = atoi(op);
		
		switch(opp) {
				
			case 1: 
					insertion(&head);
					break;
			case 2:
					deletion(&head);
					break;
			case 3: 
					display(&head);
					break;
			case 4: 
					exit(1);

			default: printf("enter the correct option\n");
		}
	}
	return 0;
}
			
			
