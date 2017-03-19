/* function inserting the node at begin */

#include "header.h"

ST *inser_begin(ST *head, ST *data)
{

	static ST *prev;

	if(((data -> data) < (head -> data)) && (head != NULL)) {
		printf("hiii\n");
		prev = head;                 
		inser_begin(head -> next, data);
	}
	else  {
		printf("hiii\n");
		prev -> next = data;
		data -> next = head;
	}

	return head;
/*	nodes++;
	new->next = *head;
	*head = new;*/
}
		
