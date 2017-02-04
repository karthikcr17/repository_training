/* function inserting the node at begin */

#include "header.h"

ST *inser_begin(ST *head,ST *temp, ST *data)
{

	if(head -> data >= data -> data) {
		data -> next = head;
		head = data;
		return head;
	}
	else if(temp->next == NULL) {

		temp->next = data;
		return head;
	}

	else if((temp -> next -> data) >= data -> data) {
		data -> next = temp -> next;
		temp -> next = data;
		return head;
	}
	else{
		inser_begin(head,temp -> next, data);
	}
}

