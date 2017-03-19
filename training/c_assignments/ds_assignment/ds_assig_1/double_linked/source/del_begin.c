#include "header.h"

void del_begin(ST **head)
{
	ST *temp = NULL;

	if(*head == NULL) {
		LINE;
		return;
	}

	temp = *head;

	if(nodes != 1) {
	(temp->next)->prev = temp->prev;
	*head = temp->next;
	}
	else 
		*head = NULL;

	free(temp);
	nodes--;

}
		
