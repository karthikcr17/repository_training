# include "../header/tree.h"

struct node* bst_insert (struct node* node, int key) // insert for binary search tree
{ 
	struct node * temp = NULL;
	
	if (node == NULL) { 							/* if tree is empty return a node */
		temp = (struct node *) malloc (sizeof (struct node));
		temp -> key = key;
		temp -> right = NULL;
		temp -> left = NULL;
		return temp;
	} else if (node -> key >=  key) {               /* Otherwise, recur down the tree */
		node -> left  = bst_insert (node -> left, key);
	} else if (node -> key < key) {
		node -> right = bst_insert (node -> right, key);   
	}
	/* return the node pointer */
	return node;
}

