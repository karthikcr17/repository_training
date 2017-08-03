#include "header.h"

void display(BT *r)
{
	if(r != NULL) {
		display(r->left);
		printf("%d\n", r->data);
		display(r->right);
	}
}
		
