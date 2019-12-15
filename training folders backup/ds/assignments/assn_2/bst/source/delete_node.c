# include "../header/tree.h"

struct node* bst_delete_node (struct node* node, int num)
{
	struct node* p = NULL;
	struct node* temp = NULL;
	if (node == NULL) {
		return NULL ;
	} else if (node -> key > num) {
			node -> left = bst_delete_node (node -> left, num);
	} else if (node -> key < num) {
			node -> right = bst_delete_node (node -> right, num);
	} else if (node -> key == num) {
		if (node -> right == NULL && node -> left == NULL) {
			free (node);
			return NULL;
		} else if (node -> right != NULL && node -> left == NULL) {
			temp = node -> right;
			free (node);
			return temp;
		} else if (node -> right == NULL && node -> left != NULL) {
			temp = node -> left;
			free (node);
			return temp;
		} else if (node -> right != NULL && node -> left != NULL) {
				p = node -> right;	
				temp = node -> right;
				while (temp -> left ) {
					temp = temp -> left;
				}
				while (p -> left != temp && p -> left != NULL) {
					p = p -> left;
				}
				node -> key = temp -> key;
				if (p -> left) {
					p -> left = bst_delete_node (temp, temp -> key);
				} else {
					node -> right = p -> right;
					free(p);
				}
		}
	} 
	return node;
}
