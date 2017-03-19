/* after given number you can insert node */


#include "header.h"

void inser_before_at_number(ST **head)
{
	int num;
	ST *temp = NULL;
	ST *prev = NULL;
	ST *new = NULL;
	
	printf("enter the number to insert before that\n");
	num = valid();

	if(NULL == (new = (ST *)malloc(sizeof(ST)))) {
		printf("malloc is failed \n");
		exit(1);
	}
	
	temp = *head;
	
	printf("enter the data to insert after number\n");                          
    new -> data = valid();                                         
                                
	if(temp->data == num) {
		new->next = *head;
		*head = new;
		nodes++;
		return;
	}
	while((temp->next != NULL) && (temp->data != num)) {
		prev = temp;
		temp = temp->next;

	}

	if(temp->data == num) {
		prev->next = new;
		new->next = temp;
	}
	else {
		printf("the number not found \n");
		return;

	}
	nodes++;
}
