#include "header.h"

void display(BT *r)
{
	if(r != NULL) {
		printf("%d\n", r->data);
		display(r->left);
		display(r->right);
	}
}
		
