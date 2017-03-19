#include "header.h"

void deletion(ST **head)
{

	ST *temp = NULL;
	ST *current = NULL;

	temp = *head;
	current = *head;

	if(temp == NULL) {
		printf("list is empty \n");
		return;
	}
	if(nodes == 1) 
		*head = NULL;

	while(current -> next == temp)
		current = current->next;
	
	current->next = temp->next
	*head = temp->next;

	free(temp);
	nodes--;
}
		
