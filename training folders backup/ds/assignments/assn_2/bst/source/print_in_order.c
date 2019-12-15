# include "../header/tree.h"

void PrintInorder (struct node * node)
{
	if (node == NULL) {
		return ;
	}
	PrintInorder(node -> left);   //print left node recursively
	printf ("%d\t", node -> key);
	PrintInorder (node -> right);  //print right node recursively
}

