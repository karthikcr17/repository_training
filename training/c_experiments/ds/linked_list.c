#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
}NODE;
NODE *head = NULL;
void insert();
void display();

int main()
{

	int op = 0;
	while(1) {

	printf("enter the oprtion \n");
	printf("1.insert at begin, 2.display \n");
	scanf("%d",&op);
	
	switch(op) {
		
		case 1: insert(); 
				printf("%p",head);
				break;
		case 2:display();
				break;
		case 3: exit(1);
		default : printf("enter the correct number \n");
		}
	}
}

void insert()
{
	
	NODE *new = (NODE*)malloc(sizeof(NODE));
	printf("enter the data \n");
	scanf("%d",&new->data);
	new -> next = NULL;	
	printf("%p",new);
	printf("%p",head);
	if(head == NULL) {
		head = new;
		printf("Hi%p",head);
	
	}
	else {
		new->next = head;
		head = new;
		printf("%d",head->data);
		}
}

void display()
{
	 NODE *temp = head;

	while(temp != NULL)	
	{		
		printf("data = %d\n",temp->data);
		temp = temp->next;
	}
}
	
	





















