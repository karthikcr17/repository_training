
/* this program on linked list operations */

#include "header.h"

ST *head = NULL; /* head is initilaize to NULL */

int main()
{

	ST *new = NULL;
	int op; /* op buffer is declared as character */
	char ch;      /* data is given as character type */


	while(1) {

		OPTIONS;
		printf("1.insertion\n");
		printf("2.display\n");
		printf("3.exit\n");

		op = valid();

		switch(op) {

			case 1:
				if(head == NULL) {
					printf("creating nodes \n");
					/* creating nodes how many you want */
					creat_node(&head);
				}
				else {
					printf("inserting nodes \n");
					if((new = (ST *)malloc(sizeof(ST))) == NULL){ /* allocating memory to
																	 new node */

						printf("malloc is failed to allocate memory\n");
						exit(1);
					}
					printf("enter the data \n");         
					new -> data = valid();
					new -> next = NULL;            
					head = inser_begin(head, head, new); /* insertion function calling */
				}
				break;
			case 2: 
				display(&head); /* display function calling */
				break;
			case 3: 
				exit(1);

			default: INCORRECT;
		}
	}
	return 0;
}


