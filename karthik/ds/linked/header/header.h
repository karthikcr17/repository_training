#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10
#define LINE printf("\n****** LIST IS EMPTY ******\n\n")
#define INCORRECT printf("\n******INCORRECT OPTION******\n\n")
#define OPTIONS printf("\n------ENTER THE OPTION------\n\n")

typedef struct NODE                                                             
{                                                                               
    int data;                                                                  
    struct NODE *next;                                                          
}ST;     


void display(ST **);
ST *inser_begin(ST *, ST *, ST *);
int valid(void);
void creat_node(ST **);
#endif
