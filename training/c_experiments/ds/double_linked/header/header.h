#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10
#define LINE printf(" \n***** LIST IS EMPTY ****\n\n");

typedef struct NODE                                                             
{
   struct NODE *prev;    
   char data[100];                                                                  
   struct NODE *next;                                                          
}ST;     

ST *head; 
void inser_begin(ST **);
void display(ST **);
void inser_at_end(ST **);
int inser_at_middle(ST **);
void del_begin(ST **);
void display(ST **);
void del_at_end(ST **);
int del_at_middle(ST **);
int insertion(ST **);
int deletion(ST **);
int newdata(void);
void rev_display(ST *);
int nodes;
#endif
