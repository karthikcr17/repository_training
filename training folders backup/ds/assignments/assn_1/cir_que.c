# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define MAX 5

void enqueue(void);
void dequeue();
void display();
int is_full();
int is_empty();

int queue[MAX];
int front = -1;
int rear = -1;

int main(void)
{
	char  ch;
	char c = 'y';

	do {
		system ("clear");
		display();
		printf( "          <<******* OPERATIONS ON CIRCULAR QUEUE*******>>\n\n"
				"			1. Enqueue				\n"
				"			2. Dequeue				\n"
				"			3. Display				\n"
				"			4. EXIT					\n");
		printf("Enter the choice:");
		do {
			ch = getchar();
		} while (ch == '\n');
		switch(ch) {
			case '1':
				enqueue();
				break;
			case '2':
				dequeue();
				break;
			case '3':
				display();
				sleep(1);
				break;
			case '4':
				c = 'n';
				printf("\nThank you\n");
				break;
			default:
				printf("Invalid operation\n");
				sleep(1);
		}


	} while((c != 'n'));
	return 0;
}

void enqueue(void) // funtion to insert element in the queue
{
	int n;

	if(is_full()) {
		printf("Queue is full\n");
		sleep(1);
	} else {
		(-1 == front)? front++ : front;
		rear = (rear + 1) % MAX;
		printf ("\nEnter the number you want to insert:");
		scanf ("%d",&n);
		queue[rear] = n;
	}
}
void dequeue() // function to delete element from the queue
{
	if( is_empty () ) {
		printf("Queue is empty\n");
		sleep(1);
	} else if ( front == rear ) {
		front = -1;
		rear = -1;
	} else if ( front == MAX - 1 ) {
		front = 0;
	} else {
		front ++;
	} 
}
void display () //to display the elements in the queue
{
	int i;

	if (is_empty()) {
		printf ("\nQueue is empty to display\n");
	} else if (rear >= front) {
		printf ("\nQueue elements are:\n");
		for(i = front; i <= rear; i++)
			printf("%d\t", queue[i]);
		printf("\n");
	} else if (front > rear) {
		printf ("\nQueue elements:\n");
		for (i = front; i <= (MAX -1); i++ ) {
			printf ("%d\t", queue[i]);
		}
		for (i = 0; i <= rear; i ++) {
			printf ("%d\t", queue[i]);
		}
		printf ("\n");
	}
}

int is_full ()
{
	if ( front == 0 && rear == (MAX - 1)) {
		return 1;
	} else if (rear == (front - 1)) {
		return 1;
	} else {
		return 0;
	}
}

int is_empty ()
{
	return (front == -1 && rear == -1) ? 1 : 0;
}


