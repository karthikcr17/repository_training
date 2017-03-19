
/* function for options for inserting node */
#include "header.h"

void insertion(ST **head)
{

	int op; /* stores the given option */

	/* displaying where you insert node in list */
	
	OPTIONS;
	printf("1.insert_begin\n");
	printf("2.insert_end\n");
	printf("3.inser_at_pos\n");
	printf("4.inser_befre_at_pos\n");
	printf("5.insert_after_at_pos\n");
	printf("6.insert_befre_at_number\n");
	printf("7.insert_after_at_number\n");
	printf("8.insert_at_MIDDLE\n");
	printf("9.insert_at_penultimate_node\n");

	op = valid();
	switch(op) {

		case 1: 
			inser_begin(head); /* calling function inser_begin */
			break;
		case 2:
			inser_at_end(head); /* calling function inser_at_end */
			break;
		case 3:
			inser_at_pos(head); /* calling function inser_at_pos */
			break;
		case 4: 
			inser_befre_at_pos(head);/* calling function inser_befre_pos */
			break;
		case 5: 
			inser_after_at_pos(head);/* calling function inser_after_at_pos */
			break;
		case 6: 
			/* calling function inser_before_at_number */
			inser_before_at_number(head);
			break;
		case 7: 
			/* calling function inser_after_at_number */
			inser_after_at_number(head);
			break;
		case 8: 
			/* calling function inser_at_middle */
			inser_at_middle(head);
			break;
		case 9:
			/* calling function inser_at_penu;timate_node */
			inser_at_penultimate_node(head);
			break;

		default: INCORRECT;
				 insertion(head);
	}
}


