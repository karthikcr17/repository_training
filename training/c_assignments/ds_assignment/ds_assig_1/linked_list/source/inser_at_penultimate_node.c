
#include "header.h"

void inser_at_penultimate_node(ST **head)
{
	int count = 1;	
	ST *new = NULL;
	ST *temp = NULL;

	temp = *head;

    if(NULL == (new = (ST*)malloc(sizeof(ST)))) {                                     
        printf("malloc is failed\n");                                            
        exit(1);                                                                
    }                         
	
	printf("enter the data \n");
	new -> data = valid();                                                                                

	if(nodes == 1) {
		new->next = *head;
		*head = new;
		nodes++;
		return;
		}

	while(count != (nodes - 1)) {
		temp = temp->next;
		count++;
	}

	new->next = temp->next;
	temp->next = new;

	nodes++;
}
