#include <stdio.h>
#define MAX 10

void push (int );
void pop ();
int  Is_empty();
int Is_full();
void size();
void print();
void peek();

int i = -1;
int stack[MAX];

int main(void) 
{
	int b;
	int ch;
	char check ='y';

	while(check == 'y') {
		printf (" \n    MENU       \n\n"
				"	1. PUSH an element    \n"
				"	2. POP an element    \n"
				"	3. check empty or not  \n"
				"	4. check full or not  \n"
				"	5. print the stack elements\n"
				"	6. print the top elemnet ofstack\n"
				"	7. to see number of elemnts in the stack \n");

		printf ("\nEnter your choice: ");
		scanf ("%d",&ch);

		switch (ch) {
			case 1: 
				printf ("\nenter the element you wnat to push: ");
				scanf ("%d",&b);
				push(b);
				printf ("\nthe stack elements after pushing:\n");
				print ();
				break;
			
			case 2:
				pop ();
				if (i != -1) {
					printf ("\nthe stack after popping:\n");
					print();
				} else {
					printf ("stack is empty now");
				}
				break;

			case 3:
				if (Is_empty ()) {
					printf ("\nstack is not empty");
				}
				break;

			case 4:
				if (Is_full()) {
					printf ("\n stack is not full");
				}

				break;

			case 5 :
				printf("\n the stack elements are:\n");
				print();
				break;

			case 6: 
				peek();
				break;

			case 7:
				size ();
			default :
				printf ("invalid option");
		}

		check = 'o';

		while (1) {
			printf ("\ndo you want perform another operation on stack:");
			scanf (" %c",&check);
			if (check == 'y' || check == 'n'){
				break;
			}
		}
	}

	return 0;


}

void push (int b )
{
	if (Is_full()) {	
		i = i + 1;
		stack[i] = b; 
	} 	
}

void pop ()
{
	if ((Is_empty())) {
		i = i -1;
	}

}

void print ()
{
	int j;
	for (j = 0; j <= i ; j ++) {
		printf ("%d\t", stack[j]);
	}

}
int Is_empty()
{
	if (i == -1) {
		printf("\nstack is empty");
		return 0;
	} else {
		return 1;
	}
}
int Is_full()
{
	if (i == MAX - 1) {
		printf ("Stack is full");
		return 0;
	} else {
		return 1;
	}
}

void peek()
{
	
	printf("top element is :%d", stack[i]);

}
void size()
{

	printf ("\nsize of the stack is :%d",i);
}
