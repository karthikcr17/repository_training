/* function inserting the node at begin */

#include "header.h"

ST *inser_begin(ST *head, ST *data)
{

	static ST *prev;

	if((data -> data) < (head -> data)) {
		prev = head;                 
		inser_begin(head -> next, data);
	}
	else  {
		prev -> next = new;
		data -> next = head;
	}

	return head;
/*	nodes++;
	new->next = *head;
	*head = new;*/
}
		
