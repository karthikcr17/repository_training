#include"header.h"

void deletion(int val)
{
	tree_node *current = NULL;  //current pointer                               
    tree_node *parent = NULL;   //pointer to parent node 
	tree_node *prev1 = NULL;
	tree_node *prev2 = NULL;
	tree_node *temp = NULL;
                                                                                
    /*allocates memory for current*/                                            
    if(NULL == (current = (tree_node *) malloc ( sizeof(tree_node)))) {         
        printf("malloc failed");                                                
        exit(0);                                                                
    }                                           
	
	/*enter the value to be deleted*/                                          
    printf("enter element to be deleted:\n");                                                 
    if(NULL == (fgets(ele, 50, stdin))) {                                       
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    /*converts element from alphabet to integer*/                               
   if(!(val = atoint(ele))) {                                                   
        perror("check your input\n");                                           
        exit(0);                                                                
    }            

	/*checks if the root is null, if null prints tree is empty*/
	if(root == NULL)
		printf("tree is empty\n");
	else {
		current = root;                                                                
   		while((current -> data != val) && (current != NULL)){
			if(val < current -> data){
				parent = current;
				current = current -> lchild;
			}
			else {
				parent = current;
				current = current -> rchild;
			}
		}
		if(current -> data == val){
			if((current -> lchild != NULL) ^ (current -> rchild != NULL)){
				if(current -> lchild != NULL){
					if(parent -> lchild == current)
						parent -> lchild = current -> lchild;
					else 
						parent -> rchild = current -> lchild;
				}
				else if(current -> rchild != NULL){
					if(parent -> rchild == current)
						parent -> rchild = current -> rchild;
					else
						parent -> lchild = current -> rchild;
				}
			}
			else if((current -> lchild == NULL)&&(current -> rchild == NULL)){
				if(parent -> lchild == current)
					parent -> lchild = NULL;
				else if(parent -> rchild == current)
					parent -> rchild = NULL;
			}
			else if((current -> lchild != NULL)&&(current -> rchild != NULL)){
					if(parent -> lchild == current){
						temp = current;
						if(temp -> rchild != NULL){
							temp = temp -> rchild;
							while(temp -> lchild != NULL){
								prev1 = temp;
								temp = temp -> lchild;
							}
							current -> data = temp-> data;
							prev1 -> lchild = NULL;
						}
					}
					else if(parent -> rchild == current){
						temp = current;
						if(temp -> lchild != NULL){
							temp = temp -> lchild;
							while(temp -> rchild != NULL){
								prev1 = temp;
								temp = temp -> rchild;
							}
							current -> data = temp -> data;
							prev1 -> rchild = NULL;
						}
					}
				}
		}
		else 
			printf("node not found \n");
	}
}
