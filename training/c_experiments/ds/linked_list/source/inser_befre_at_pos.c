
#include "header.h"

void inser_befre_at_pos(ST **head)
{
	int pos;
	int count = 1;	
	ST *new = NULL;
	ST *temp = NULL;

	
	printf("enter the position to insert before this\n");
	pos = valid();

	if((pos > (nodes + 2)) || (pos <= 1)) {
		printf("enter the postion with in nodes \n");	
		return;
		}

	if(NULL == (new = (ST *)malloc(sizeof(ST)))) {
		printf("malloc is failed to allocate space for new \n");
		exit(1);
	}


	temp = *head;

	while((temp->next != NULL) && (count != (pos - 1))) {
		temp = temp->next;
		count++;
	}

	printf("enter the data to insert after number\n");                          
    new -> data = valid();             

	if(pos == 2) {
		new->next = *head;
		*head = new;
	}
	else {
		new->next = temp->next;
		temp->next = new;
	}
	nodes++;
}
