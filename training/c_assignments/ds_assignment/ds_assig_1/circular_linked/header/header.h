#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10

typedef struct NODE                                                             
{                                                                               
    char data;                                                                  
    struct NODE *next;                                                          
}ST;     

ST *head; 

void display(ST **);

void insertion(ST **);
void deletion(ST **);

int nodes;
#endif
