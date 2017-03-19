
/* deletion node at begining */

#include "header.h"

void del_begin(ST **head)
{

	ST *temp = NULL;

	temp = *head;
	if(temp == NULL) { /* checking list is empty or not */
		printf("list is empty \n");
		return;
	}
	*head = temp->next;
	free(temp);
	nodes--;

}
		
