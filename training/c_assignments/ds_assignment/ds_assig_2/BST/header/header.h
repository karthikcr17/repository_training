#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10

typedef struct NODE                                                             
{ 	
	struct NODE *left;                                                                              
    char data;                                                                  
    struct NODE *right;                                                          
}BT;     

BT *root; 

//id display(BT **);

void insertion(BT **);
void pre_order(BT *);
void post_order(BT *);
void in_order(BT *);
void deletion(BT **);
//int nodes;
#endif
