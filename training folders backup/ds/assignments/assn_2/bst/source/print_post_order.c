# include "../header/tree.h"

void PrintPostorder (struct node* node)
{
	if (node == NULL) {
		return ;
	}
	PrintPostorder (node -> left);
	PrintPostorder (node -> right);
	printf ("%d\t", node -> key);
}

