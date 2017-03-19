#include "header.h"

void pre_order(BT *r)
{
	if(r != NULL) {
		printf("%d\n", r->data);
		pre_order(r->left);
		pre_order(r->right);
	}
}
		
