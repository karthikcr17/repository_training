
#include "header.h"

void insertion(BT **root)
{

	BT *new = NULL;
	BT *temp = NULL;
	char buff[MAX];

	if((new = (BT *)malloc(sizeof(BT))) == NULL) {
		printf("malloc is failed \n");
		exit(1);
	}
	
	printf("enter the data \n");
	if(fgets(buff, MAX, stdin) == NULL) {
		printf("fgets is failed \n");
		exit(1);
	}
	*(buff + strlen(buff) - 1) = '\0';

	new->data = atoi(buff);

	new->right = NULL;
	new->left = NULL;

	if(*root == NULL) {
		*root = new;
	}
	else {
		temp = *root;
		while(1) {
			if(temp->data <= new->data) {
				if(temp->right == NULL) {
					temp->right = new;
					break;
				}
				temp = temp->right;
			}
			else if(temp->data > new->data) {
				if(temp->left == NULL) {
					temp->left = new;	
					break;
				}
				temp = temp->left;
			}
		}
	}
}


