# include "../header/tree.h"
void PrintLevelorder (struct node* node, int height)  //level order traversal
{
	int level;  //variable to represent the level

	for (level = 0; level < height; level++) {
		Printonelevel (node, level);  // printing level by level in tree
	}
}
void Printonelevel (struct node* node, int level)  //prints elements in given level
{
	if (NULL == node) {
		return;
	}
	if (0 == level) {
		printf ("%d\t", node -> key);
	} else if (level > 0) {    // recurses upto node is pointing to given level
		Printonelevel (node -> left, level - 1);
		Printonelevel (node -> right, level - 1);
	}
}
