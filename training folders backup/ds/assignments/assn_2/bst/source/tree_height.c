# include "../header/tree.h"

int height (struct node* node)
{
	int lheight;
	int rheight;

    if (node == NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
		lheight = height(node -> left);
		rheight = height(node -> right);
        /* use the larger one */
		if (lheight > rheight) {
			return(lheight + 1);
		} else {
			return(rheight + 1);
		}
    }
}

