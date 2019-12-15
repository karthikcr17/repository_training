/* Binary Tree */

# include "../header/tree.h" //this header file include all the declarations used in BST

int main (void)
{
	struct node* root = NULL; // declaring root node of the tree
	int key;  // value to be inserted or deleted from the node

	do {
		//system ("clear");
		
		printf ("%s\t\tMENU FOR BINARY SEARCH TREE\n\n", KGRN);
		printf ("%s\t\t\t1. INSERT\n"
				"\t\t\t2. DELETE\n"
				"\t\t\t3. Display in pre order\n"
				"\t\t\t4. Display in post order\n"
				"\t\t\t5. Display in Level order\n"
				"\t\t\t6. EXIT\n", KBLU);		
		
		if (root == NULL) {
			printf ("%s\nTree is empty", KMAG);
		} else {
			printf ("%s\nTree elements in order are:\n", KMAG);
			PrintInorder (root);  // printing tree elemensts when everytime tree got updated		

		}
		printf ("\n\nEnter the choice:");

		switch (myatoi ()) {
			case 1:					// insertion in binary tree
				printf ("\nEnter the number you want to insert");
				
				key = myatoi ();
				root = bst_insert (root, key);
				
				break;
			
			case 2: 				// deletion in binaary tree
				printf ("\nEnter the number you want to delete");
				
				key = myatoi ();
				root = bst_delete_node (root, key);
				
				break;
			case 3:					// prints in preorder
				printf ("\nElements in pre order form are:\n");
				PrintPreorder (root);
				getchar();
				printf ("\n");
				break;
			case 4:					//prints in postorder
				printf ("\nElements in post order form are:\n");
				PrintPostorder (root);
				printf ("\n");
				break;
			case 5:					//prints in levelorder
				printf ("\nElements in level order are:");
				PrintLevelorder (root, height(root));
				printf ("\n");
				break;
			case 6:
				while (root != NULL) {
					root = bst_delete_node (root, root -> key);
				}
				printf ("%s", KNRM);
				exit (0);
			default :
				printf ("\nInvalid Option\n\n");
				break;
		}
	} while (1);

	return 0;
}
