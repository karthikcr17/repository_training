#ifndef TREE_H
#define TREE_H

# include <stdio.h>
# include <stdlib.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

struct node {
	int key;
	struct node *right;
	struct node *left;
};

void PrintInorder (struct node*);
struct node* bst_insert (struct node*, int);
struct node* bst_delete_node (struct node*, int); 
void PrintPreorder (struct node*);
void PrintPostorder (struct node*);
void PrintLevelorder (struct node*, int);
void Printonelevel (struct node*, int);
int height (struct node*);
int myatoi (void);


#endif
