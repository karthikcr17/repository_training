#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
char data;
struct link *next;
}ST;
void add_begin(ST**);
void print(ST*);
void sort(ST*);
int main()
{
ST *hptr;
hptr = 0;
char ch;
do
{
add_begin(&hptr);
printf("do u want create another node\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
print(hptr);
sort(hptr);
//print(hptr);
}
void add_begin(ST **ptr)
{
ST *new;
new = (ST*)malloc(sizeof(ST));
printf("enter the data\n");
scanf(" %c",&new->data);
new->next=*ptr;
*ptr = new;
}
void print(ST *ptr)
{
ST *t = ptr;
int c;
printf("data in list\n");
while(t)
{
printf("%c->",t->data);
t = t->next;
}
}
void sort(ST *ptr)
{
ST *temp = ptr;
ST *p;
char t;
int i,j,c;
for(c=0;ptr;c++)
ptr = ptr->next;
printf("count %d\n",c);
ptr = temp;
for(i=0;i<c;i++)
{
for(i=0;i<c;i++)
{
for(j=0;j<c-i-1;j++)
{
if(i
}

