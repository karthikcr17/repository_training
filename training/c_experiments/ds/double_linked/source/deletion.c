
#include "header.h"

int deletion(ST **head)
{

	char op[MAX];

	printf("enter the option \n");
	printf("1.deletion_begin\n");
	printf("2.deletion_end\n");
	printf("3.deletion_at_MIDDLE\n");

	fgets(op, MAX, stdin);
	*(op + strlen(op) - 1) = '\0';

	switch(atoi(op)) {

//		case 1: 
//			del_begin(head);
//			break;
//		case 2:
//			del_at_end(head);
//			break;
		case 3: 
			del_at_middle(head);
			break;

		default: printf("enter the correct option\n");
	}

}


