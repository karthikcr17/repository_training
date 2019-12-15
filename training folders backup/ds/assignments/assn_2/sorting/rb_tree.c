# include "../header/tree.h" //this header file include all the declarations used in BST

struct rbtnode* root = NULL; // declaring root node of the tree

int main (void)
{
	char str[10] ; // getting input from user
	char ch = 'y';
	int key;  // value to be inserted or deleted from the node

	do {
		//		system ("clear");
		printf ("\t\t MENU FOR RED BLACK TREE\n");
		printf ("\t\t\t1. INSERT\n");
		printf ("\t\t\t2. DELETE\n");
		printf ("\t\t\t3. Display in pre order\n");
		printf ("\t\t\t4. Display in post order\n");
		printf ("\t\t\t5. Display in Level order\n");
		printf ("\t\t\t6. EXIT");		
		if (root == NULL) {
			printf ("\nTree is empty");
		} else {
			printf ("\nTree elements in order are:\n");
			PrintInorder (root);  // printing tree elemensts when everytime tree got updated		

		}
		printf ("\nEnter the choice: ");
		if (NULL ==	fgets(str, 10, stdin)) {
			perror ("reading failed");
			exit (1);
		}

		switch (myatoi (str)) {
			case 0:
				break;
			case 1:					// insertion in binary tree
				printf ("\nEnter the number you want to insert");
				//		scanf ("%d ", &key);
				do {
					if (NULL ==	fgets(str, 10, stdin)) {
						perror ("reading failed");
						exit (1);
					}
					key = myatoi (str);
				} while (0 == key);
				root = rbinsert (root, key);
				break;
			case 2: 				// deletion in binaary tree
				printf ("\nEnter the number you want to delete");
//				scanf ("%d", &key);
				do {
					if (NULL ==	fgets(str, 10, stdin)) {
						perror ("reading failed");
						exit (1);
					}
					key = myatoi (str);
				} while (0 == key);
//				root = rb_delete_node (root, key);
				break;
			case 3:					// prints in preorder
				printf ("\nElements in pre order form are:\n");
				PrintPreorder (root);
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
				ch = 'n';
				break;
			default :
				printf ("\nInvalid Option\n\n");
				break;
		}
	} while (ch == 'y');

	return 0;
}
