#include "header.h"

void deletion(ST **head)
{
	ST *temp = NULL;

	if(*head == NULL) {
		printf("list is empty no nodes are present \n");
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
		
