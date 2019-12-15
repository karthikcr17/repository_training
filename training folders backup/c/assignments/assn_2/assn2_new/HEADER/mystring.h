#include <stdlib.h>

#ifndef MYSTRING_H
#define MYSTRING_H

int mystrlen(char *);
char* chr_add_instr (char *, char);
char *sappend(char *, char *);
char *snapped(char *, char *, int );
short int mystrcmp(char *, char *);
short int mystrcasecmp (char *, char *);
size_t mystrspn(char *, char *);
char* mystrrev (char *);
void mystrcpy(char *, char *);
void mystrncpy(char *, char *, int );
char* mystrtok(char *, char *);
char* mystrstr(char *, char *); 
char *insertchar(char *, char, int);
char* mysqueeze (char*);
char *remsstr(char *, char *);

#endif
