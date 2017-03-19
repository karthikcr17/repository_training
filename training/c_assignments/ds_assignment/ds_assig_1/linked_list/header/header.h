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

ST *head; 

void display(ST **);
void insertion(ST **);
void deletion(ST **);

void inser_begin(ST **);
void inser_at_end(ST **);
void inser_at_pos(ST **);
void inser_befre_at_pos(ST **);
void inser_after_at_number(ST **);
void inser_before_at_number(ST **);
void inser_after_at_pos(ST **);
void inser_at_middle(ST **);
void inser_at_penultimate_node(ST **);

void del_begin(ST **);
void del_at_end(ST **);
void del_at_pos(ST **);
void del_befre_at_pos(ST **);
void del_after_at_number(ST **);
void del_before_at_number(ST **);
void del_after_at_pos(ST **);
void del_at_middle(ST **);
void del_at_penultimate_node(ST **);

int valid(void);

void creat_node(ST **);

int nodes;
#endif
