#include"header.h"

void deletion(BT **root)
{
	char ele[MAX];
	int val;
	BT *current = NULL;  //current pointer                               
    BT *parent = NULL;   //pointer to parent node 
	BT *prev1 = NULL;
	BT *prev2 = NULL;
	BT *temp = NULL;
                                                                                
    /*allocates memory for current                                            
    if(NULL == (current = (tree_node *) malloc ( sizeof(tree_node)))) {         
        printf("malloc failed");                                                
        exit(0);                                                                
    }                             */              
	
	/*enter the value to be deleted*/                                          
	printf("enter element to be deleted:\n");                                                 
	if(NULL == (fgets(ele, 50, stdin))) {                                       
		perror("fgets failed");                                                 
		exit(EXIT_FAILURE);                                                     
	}                                                                           

	/*converts element from alphabet to integer*/                               
	if(!(val = atoi(ele))) {                                                   
		perror("check your input\n");                                           
		exit(0);                                                                
	}            

	/*checks if the root is null, if null prints tree is empty*/
	if(*root == NULL)
		printf("tree is empty\n");
	else {
		current = *root;                                                                
		while((current -> data != val) && (current != NULL)){
			if(val < current -> data){
				parent = current;
				current = current -> left;
			}
			else {
				parent = current;
				current = current -> right;
			}
		}
		if(current -> data == val){
			if((current -> left != NULL) ^ (current -> right != NULL)){
				if(current -> left != NULL){
					if(parent -> left == current)
						parent -> left = current -> left;
					else 
						parent -> right = current -> left;
				}
				else if(current -> right != NULL){
					if(parent -> right == current)
						parent -> right = current -> right;
					else
						parent -> left = current -> right;
				}
			}
			else if((current -> left == NULL)&&(current -> right == NULL)){
				if(parent -> left == current)
					parent -> left = NULL;
				else if(parent -> right == current)
					parent -> right = NULL;
			}
			else if((current -> left != NULL)&&(current -> right != NULL)){
				if(parent -> left == current){
					temp = current;
					if(temp -> right != NULL){
						temp = temp -> right;
						while(temp -> left != NULL){
							prev1 = temp;
							temp = temp -> left;
						}
						if(prev1 == NULL) {
							current->right = NULL;
							current->data = temp->data;
						}
						else {
							current->data = temp->data;
							prev1 -> left = NULL;
						}
					}
				}
				else if(parent -> right == current){
					temp = current;
					if(temp -> left != NULL){
						temp = temp -> left;
						while(temp -> right != NULL){
							prev1 = temp;
							temp = temp -> right;
						}
						if(prev1 == NULL) {
							current -> left = NULL;
							current -> data = temp -> data;
						}
						else {
							current -> data = temp -> data;
							prev1 -> right = NULL;
						}
					}
				}
			}
		}
		else 
			printf("node not found \n");
	}
}
