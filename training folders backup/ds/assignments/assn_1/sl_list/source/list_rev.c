#include "../header/sl_list.h"

struct node *list_rev (struct node* node, struct node *prev)
{
	static struct node* root = NULL;
	struct node *temp = NULL;

	if (node == NULL) {
			root = prev;
			return root;
	}

	temp = node;

	list_rev (temp -> link, temp);
	temp -> link = prev;

	return root;
}
