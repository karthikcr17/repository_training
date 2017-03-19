/* after given number you can insert node */


#include "header.h"

void inser_after_at_number(ST **head)
{
	int num;
	ST *temp = NULL;
	ST *new = NULL;

	if(NULL == (new = (ST *)malloc(sizeof(ST)))) {
		printf("malloc is failed \n");
		exit(1);
	}

	printf("enter the data to insert after number\n");
	num = valid();
	
	temp = *head;

	while((temp->next != NULL) && (temp->data != num)) {
		temp = temp->next;
	}

	printf("enter the data \n");
	new -> data = valid();

	if(temp->data == num) {
		new->next = temp->next;
		temp->next = new;
	}
	else {
		printf("the number not found \n");
		return;

	}
	nodes++;
}
