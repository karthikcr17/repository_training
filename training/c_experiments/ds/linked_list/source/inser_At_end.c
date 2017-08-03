
/* inserting node at end of list */

#include "header.h"

void inser_at_end(ST **head)
{
	ST *temp = *head;

	ST *new = (ST *)malloc(sizeof(ST));
	if(new == NULL) {
		printf("malloc is failled \n");
		exit(1);
	}

	printf("enter the data\n");                          
	new -> data = valid();              

	nodes++;
	new->next = NULL;

	if(temp == NULL) {
		*head = new;

	}
	else {
		while((temp->next) != NULL)
			temp = temp->next;
		temp->next = new;
	}
}



