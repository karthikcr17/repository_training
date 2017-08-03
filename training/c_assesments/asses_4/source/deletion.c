
/* this function delete the node you given and delete that node havin
   one child */

#include "header.h"

void deletion(BT **root)
{
	BT *prev = NULL; 
	BT *temp = *root;

	char buff[MAX];
	int data;

	printf("enter the deletion node \n");
	fgets(buff, MAX, stdin);

	*(buff + strlen(buff) - 1) = '\0';
	if((data = atoi(buff)) == 0) {
		printf("enter the correct data \n");
		return;
	}

	if(*root == NULL) {
		printf("tree is empty \n");
		return;
	}
	else {
		temp = *root;
		while(1) {
			if(temp->data < data) {
				prev = temp;
				temp = temp->right;
			}
			else if(temp->data > data) {
				prev = temp;
				temp = temp->left;
			}
			else if(temp->data == data) {
				if((temp->right == NULL) ^ (temp->left == NULL)) {
					if(temp->right != NULL) {
						if(temp->right != NULL) {
							prev->right = temp->right;
							free(temp);
							return;
						}
						else {
							prev->right = temp->left;
							free(temp);
							return;
						}
					}
					else{
						prev->left = temp->left;
						free(temp);
						return;
					}

				}		
				else {
					printf("that node having zero or two nodes \n");
					return;
				}	
			}
		}
	}
}

