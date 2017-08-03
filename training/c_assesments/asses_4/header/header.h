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


void insertion(BT **);
void display(BT *);
void deletion(BT **);

#endif
