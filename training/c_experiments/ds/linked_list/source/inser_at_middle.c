
#include "header.h"

void inser_at_middle(ST **head)
{
	int count = 1;	
	ST *new = NULL;
	ST *temp = NULL;

	temp = *head;

	if(temp == NULL) {
		printf("list is empty \n");
		return;
	}

	printf("enter the data to insert middle\n");                          
	new -> data = valid();  

	if((nodes / 2) == 0) {
		new->next = *head;
		*head = new;
		nodes++;
		return;
	}

	while(count != (nodes / 2)) {
		temp = temp->next;
		count++;
	}

	new->next = temp->next;
	temp->next = new;

	nodes++;
}
