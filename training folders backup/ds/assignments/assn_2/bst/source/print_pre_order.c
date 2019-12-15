# include "../header/tree.h"

void PrintPreorder (struct node* node)
{
	if (node == NULL) {
		return ;
	}
	printf ("%d\t", node -> key);
	PrintPreorder (node -> left);
	PrintPreorder (node -> right);
}

