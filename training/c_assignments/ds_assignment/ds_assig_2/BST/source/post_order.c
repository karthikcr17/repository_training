#include "header.h"

void post_order(BT *r)
{
	if(r != NULL) {
		post_order(r->left);
		post_order(r->right);
		printf("%d\n", r->data);
	}
}
		
