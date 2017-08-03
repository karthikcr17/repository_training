
#include "header.h"

int insertion(ST **head)
{

	char op[MAX];

	printf("enter the option \n");
	printf("1.insert_begin\n");
	printf("2.insert_end\n");
	printf("3.insert_at_MIDDLE\n");

	fgets(op, MAX, stdin);
	*(op + strlen(op) - 1) = '\0';

	switch(atoi(op)) {

		case 1: 
			inser_begin(head);
			break;
		case 2:
			inser_at_end(head);
			break;
		case 3: 
			inser_at_middle(head);
			break;

		default: printf("enter the correct option\n");
	}


}


