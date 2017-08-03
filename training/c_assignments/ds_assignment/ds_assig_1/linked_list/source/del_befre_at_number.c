
/* deletion node at before given number */

#include "header.h"

void del_before_at_number(ST **head)
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

	if((temp->data != num) || ((pos - 1) == 0)) {
		printf("number is not found in list \n");	
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
