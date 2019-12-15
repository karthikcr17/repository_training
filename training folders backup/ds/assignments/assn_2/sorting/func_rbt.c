# include "../header/tree.h"
struct rbtNode* newnode (int key, char s, struct rbtNode* parent)
{
	temp = (struct node*) malloc (sizeof (struct rbtNode));
	temp -> key = key;
	temp -> parent = parent;
	temp -> special = s;
	temp -> left = NULL;
	temp -> right = NULL;
	temp -> color = 'r';
	return temp;
}



struct rbtNode* rb_insert (struct rbtNode* root, int key)
{
	struct rbtNode* temp = NULL;
	if (root == NULL ) {
		temp = newnode (key, 'n', NULL)
		temp -> parent = NULL;
		temp -> left = newnode (0, 's', temp);
		temp -> right = newnode (0,'s', temp);
		temp -> color = 'b';
		return temp;
	} else if (root -> special == 's') {
		temp = newnode (key, 'n', NULL);
		temp -> parent = root -> parent;
		temp -> left = root;
		temp -> right = newNode(0, 's', temp);

	} else if (key < (root -> key)) {
		root -> left = rb_insert (root -> left, key);
	} else if (key > (root -> key)) {
		root -> right = rb_insert (root -> right, key);
	}
	  



}
