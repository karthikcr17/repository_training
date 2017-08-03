
/* inserting node at given position */

#include "header.h"

void inser_at_pos(ST **head)
{
	int pos;
	int count = 1;	

	
	printf("enter the position to insert\n");
	pos = valid();

	if((pos > (nodes + 1)) || (pos <= 0)) {
		printf("enter the postion with in nodes \n");	
		return;
		}

	ST *new = (ST *)malloc(sizeof(ST));

	ST *temp = (ST *)malloc(sizeof(ST));

	temp->next = *head;

	while((temp->next != NULL) && (count != pos)) {
		temp = temp->next;
		count++;
	}

	printf("enter the data \n");

	new -> data = valid();

	if(pos == 1) {
		new->next = *head;
		*head = new;
	}
	else {
		new->next = temp->next;
		temp->next = new;
	}
	nodes++;
}
