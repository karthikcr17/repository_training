
#include "header.h"

void display(ST **head)
{
	ST *temp = *head;

	if(*head == NULL) {
		LINE;
		return;
	}

	printf("displaying data\n");
	while(temp != NULL) {
		printf(" %d <-->",temp->data);
		temp = temp->next;
	}
	printf("\n");
}



