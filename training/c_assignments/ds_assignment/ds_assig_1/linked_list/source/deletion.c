
/* this function is display the deletion options */

#include "header.h"

void deletion(ST **head)
{

	int op; /* strores the given option */
	
	OPTIONS;
	printf("1.deletion_begin\n");
	printf("2.deletion_end\n");
	printf("3.deletion_at_pos\n");
	printf("4.deletion_befre_at_pos\n");
	printf("5.deletion_after_at_pos\n");
	printf("6.deletion_befre_at_number\n");
	printf("7.deletion_after_at_number\n");
	printf("8.deletion_at_MIDDLE\n");
	printf("9.deletion_at_penultimate_node\n");

	op = valid();	

	switch(op) {

		case 1: 
			/* calling function del_begin */
			del_begin(head); 
			break;
		case 2:
			/* calling function del_at_end */
			del_at_end(head);
			break;
		case 3:
			/* calling function del_at_pos */
			del_at_pos(head);
			break;
		case 4: 
			/* calling function del_at_pos */ 
			del_befre_at_pos(head);
			break;
		case 5: 
			/* calling function del_after_at_pos */ 
			del_after_at_pos(head);
			break;
		case 6: 
			/* calling function del_before_at_number */ 
			del_before_at_number(head);
			break;
		case 7: 
			/* calling function del_after_at_number */ 
			del_after_at_number(head);
			break;
		case 8: 
			/* calling function del_at_middle */ 
			del_at_middle(head);
			break;
		case 9:
			/* calling function del_at_penultimate_node */ 
			del_at_penultimate_node(head); 
			break;

		default: INCORRECT;
				 deletion(head);
	}

}



