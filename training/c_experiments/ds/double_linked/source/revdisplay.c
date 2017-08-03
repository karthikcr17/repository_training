#include "header.h"

void rev_display(ST *head)
{
	if(head != NULL) {
		rev_display(head->next);
		printf("%s <-->",head->data);
		}
}
