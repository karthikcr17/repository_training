
#include "header.h"

void rev_linkedrec(ST **head) 
{
	if(!(*head)) 
		return;
	ST *rest = (*head)->next;
	if(!rest)
		return;
	rev_linkedrec(&rest);
	(*head)->next->next = *head;
	(*head)->next = NULL;
	*head = rest;
}
