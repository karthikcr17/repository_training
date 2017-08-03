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
	else {
		while(temp -> next == *head)
			temp = temp -> next;

		*head = (*head)->next;
		temp -> next = *head;
	}

	free(current);
	nodes--;
}
		
