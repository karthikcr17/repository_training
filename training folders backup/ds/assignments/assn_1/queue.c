# include <stdio.h>
# include <stdlib.h>
# define MAX 5

void enqueue(void);
void dequeue();
void display();

int queue[MAX];
int front = -1;
int rear = -1;
int count;

int main(void)
{
	int ch;
	char c = 'y';

	do {
		printf( "<<******* OPERATIONS ON QUEUE*******>>\n\n"
				"				1. Enqueue				\n"
				"				2. Dequeue				\n"
				"				3. Display				\n");
		printf("Enter the choice");
		scanf("%d",&ch);
		if (front == MAX) {
				front = -1;
				rear = -1;
		}
		switch(ch) {
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("\nInvalid operation\n");
		}
		printf("Do you want to continue");
		scanf(" %c", &c);
		system("clear");
	} while((c == 'y') || (c == 'Y'));
	return 0;
}

void enqueue(void) // funtion to insert element in the queue
{
	int n;

	if(rear == MAX - 1) {
		printf("Queue is full\n");
	} else {
		printf("Enter the number to insert\n");
		scanf("%d", &n);
		if(count == 0) {
			front++;
			rear++;
		} else {
			rear++;
		}
		queue[rear] = n;
		count++;
	}
}
void dequeue() // function to delete element from the queue
{
	if((rear == -1) && (front == MAX)) {
		printf("Queue is empty\n");
	} else {
		front++;
	}
}
void display () //to display the elements in the queue
{
	int i = front;

	if (front == -1 || front == MAX) {
		printf ("\nqueue is empty to display");
	} else {
		printf ("\nqueue elements are:\n");
		for(; i <= rear; i++)
			printf("%d\t", queue[i]);
			printf("\n");
	}
}
