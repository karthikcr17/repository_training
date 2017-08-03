/* this program is stack using arrays */

#include "header.h"

int main()
{

	char opp[MAX];   /* stores the option in array */
	char op;        /* stores the option in character */

	int top = -1;	/* top value given as -1 */
	int element;   /* stores the data */

	char elm[MAX];

	while(1) {

		printf("select the option perform on stack \n");
		printf("1.insert 2.deletion 3.display 4.exit \n");
		fgets(opp, MAX, stdin);
		op = *opp;

		switch(op) {

			case '1': printf("enter the element to insert\n");
					  fgets(elm, MAX, stdin);
					  *(elm + strlen(elm) - 1) = '\0';
					  element = atoi(elm);
					  push(element); /* calling push function */
					  break;
			case '2': pop(); /* calling pop function */
					  break;
			case '3': display(); /* calling display function */
					  break;
			case '4': exit(1);

			default : printf("enter the correct option \n");

		}
	}
	
	free(elm); /* free the elm */
	free(opp);/* free the opp */	
	return 0;
}
