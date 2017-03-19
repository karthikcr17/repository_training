#include "header.h"

void in_order(BT *r)
{
	if(r != NULL) {
		in_order(r->left);
		printf("%d\n", r->data);
		in_order(r->right);
	}
}
		
