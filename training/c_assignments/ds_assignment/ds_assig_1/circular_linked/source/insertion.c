
#include "header.h"

void insertion(ST **head)
{

	ST *new = (ST *)malloc(sizeof(ST));
	nodes++;
	
	printf("enter the data \n");
	fgets(&new->data, MAX, stdin);

	ST *temp = *head;

	if(temp == NULL) {
		*head = new;
	 	new->next = *head;
		}
	else {
		while((temp->next) != *head)
			temp = temp->next;
		temp->next = new;
		new->next = *head;
		}
}
	


