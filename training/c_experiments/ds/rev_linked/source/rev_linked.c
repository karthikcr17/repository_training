
#include "header.h"

ST *rev_linked(ST *head) 
{
	ST *prev = NULL;
	ST *current = head;

	if(head == NULL) {
		printf("list is empty \n");
		exit(1);
	}
	while(current) {
		ST *next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}
