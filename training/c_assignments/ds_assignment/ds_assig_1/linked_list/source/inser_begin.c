/* function inserting the node at begin */

#include "header.h"

void inser_begin(ST **head)
{

	ST *new;

	if((new = (ST *)malloc(sizeof(ST))) == NULL){ /* allocating memory to
													 new node */

		printf("malloc is failed to allocate memory\n");
		exit(1);
	}

	printf("enter the data \n");                          

	new -> data = valid();              

	nodes++;
	new->next = *head;
	*head = new;
}
		
