
/* deletion at before given position */

#include "header.h"

void del_befre_at_pos(ST **head)
{
	int pos;
	int count = 1;	
	ST *temp = NULL;
	ST *prev = NULL; 

	
	printf("enter the position to deletion before that \n");
	pos = valid();

	if(((pos - 1) > (nodes + 1)) || ((pos - 1) <= 0)) {
		printf("enter the postion with in nodes \n");	
		return;
		}

	temp = *head;

	while((temp->next != NULL) && (count != (pos - 1))) {
		prev = temp;
		temp = temp->next;
		count++;
	}

	if((pos - 1) == 1) {
		*head = temp->next;
	}
	else {
		prev->next = temp->next;
	}
	nodes--;
}
