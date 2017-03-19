/* queue is implimented using arrays*/


#include "header.h"

int rear = -1;  /*rear is initilaize to -1 */
int front = -1; /* front is initilaize to -1 */
int limit = 5; /* limit is given as 5 */
int queue[MAX]; /* queue is declared character array size is MAX */

int main()
{
	char op[MAX]; /* option is strored in this buffer */
	int element;  /* stores the data of queue */

	while(1) {
		printf("enter the op perform on queue 1.enqueue,\
							2.dequeue,3.display4.exit\n");
		fgets(buff, MAX, stdin);
		switch(atoi(buff)) {

			case 1:
				printf("enter the element to insert\n");
				scanf("%d",&element);
				rear = rear + 1;		
				/* calling the enqueue function */
				enqueue(element, rear, limit, queue); 
				break;
			case 2: 
				front = front + 1;
				/* calling the dequeue function */
				element = dequeue(element, front, rear, queue);
				break;
			case 3: 
				/* calling display function */
				display(front, rear, queue);
				break;
			case 4: 
				exit(1);
			default: 
				printf("enter the correct option \n");

		}
	}
}

