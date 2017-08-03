
#include "header.h"

int del_at_middle(ST **head)
{
	int count = 1;

	ST *temp = NULL;

	temp = *head;

	if(temp == NULL) {
		LINE;
		return 0;
	}

	if((nodes / 2) == 0) {

		free(temp);
		*head = NULL;
		nodes--;
		return 0;
	}

	while(count != (nodes / 2)) {
		temp = temp->next;
		count++;
	}
	if(nodes != 2) {
		temp->next = (temp->next)->next;
		(temp->next)->prev = temp->prev;	
		free(temp);
	}
	else {
		free(temp->next);
		temp->next = NULL;
	}
	nodes--;
}
