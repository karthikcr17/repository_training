
#include "header.h"

void del_at_end(ST **head)
{

	

	ST *temp = *head;

	if(temp == NULL) {
		LINE;
		return;
		}
	if(nodes == 1) 
		*head = NULL;
	else {
	 	while((temp->next) != NULL)
			temp = temp->next;
		(temp->prev)->next = NULL;
		}
	free(temp);
	nodes--;
}
	


