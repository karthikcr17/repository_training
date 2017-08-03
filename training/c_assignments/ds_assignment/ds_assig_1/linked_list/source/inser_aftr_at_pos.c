
#include "header.h"

void inser_after_at_pos(ST **head)
{
	int pos;
	int count = 1;	

	printf("enter the position to insert after this\n");
	pos = valid();

	if((pos > nodes) || (pos < 0)) {
		printf("enter the postion with in nodes \n");	
		return;
	}

	ST *new = (ST *)malloc(sizeof(ST));

	ST *temp = (ST *)malloc(sizeof(ST));

	temp->next = *head;

	while((temp->next != NULL) && (count != (pos + 1))) {
		temp = temp->next;
		count++;
	}

	printf("enter the data to insert after number\n");                          

	new -> data = valid();              

	if(pos == 0) {
		new->next = *head;
		*head = new;
	}
	else {
		new->next = temp->next;
		temp->next = new;
	}
	nodes++;
}
