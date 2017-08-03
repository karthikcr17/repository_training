
#include "header.h"

void display(ST **head)
{
	ST *temp = *head;
	int count = nodes;		
	if(temp == NULL) {
		printf("no nodes in the list \n");
		printf("list is empty \n");
		return;
	}
	printf("displaying data\n");
	while(count > 0) {
		printf("%c->",temp->data);
		temp = temp->next;
		count--;
	}
	printf("\n");
}
	


