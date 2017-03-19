
/* this program on circular queue operations */

#include "header.h"
f = 0; /*initilaize front as a 0 */
r = -1; /*initilaize rear as a -1 */
count = 0; /* count initilaize as 0 */
int main()
{
	int choice; /* stores the entered choice */
	int element; /* element stores the data */

	printf("enter your choice\n1.enqueue\n2.dequeue\n3.display\n4.break\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1 :
			printf("enter element\n");
			scanf("%d",&element); 
			/* calling function enqueue */
			enqueue(element);
			main();
			break;
		case 2 :
			/* calling function dequeue */
			dequeue(queue);
			main();
			break;
		case 3:
			/* calling function display */
			display(queue);
			main();
			break;
		case 4 : break;
		default : printf("invalid choice\n");
	}
	return 0;
}
