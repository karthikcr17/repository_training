
#include "header.h"

void del_after_at_number(ST **head)
{
	int num;
	ST *temp = NULL;
	ST *prev = NULL; 
	int pos = 1;
	int count = 1;
	
	printf("enter the number to deletion before\n");
	num = valid();

	temp = *head;

	while((temp->data != num) && (temp->next != NULL)) {
		pos++;
		temp = temp->next;
	}

	if(temp->data != num) {
		printf("number is not found in list \n");	
		return;
		}

	temp = *head;

	while((temp->next != NULL) && (count != (pos + 1))) {
		prev = temp;
		temp = temp->next;
		count++;
	}
	if((pos + 1) > nodes) {
		printf("there is no nodes in link \n");
		return;
	}
	else {
		prev->next = temp->next;
	}
	nodes--;
}
