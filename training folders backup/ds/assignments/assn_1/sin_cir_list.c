#include <stdio.h>
#include <stdlib.h>

void ins_beg();
void ins_end ();
void ins_pos ( int);
void display(void);
int  search (int);

void del_pos (int);
void del_end();
void del_beg();

struct node {
	int data;
	struct node* link;
};

struct node * end = NULL;
struct node *temp = NULL;
struct node *p = NULL;
int size;
int n;

int main ()
{
	int ch;
	int pos;
	char m = 'y';
	while (m == 'y') {
		system ("clear");
		printf ("\n   OPERATIONS TO BE PERFORMED ON CSLL");
		printf ("\n  1.INSERT\n  2.DELETE\nDo you want to insert or delete? :");
		scanf ("%d", &ch);

		if (ch == 1) {
			m = 'y';
			while (m == 'y') {
				system ("clear");
				printf ("\n\t       MENU FOR CSLL ISNERTION        \n"
						"\n\t1. Insert at the beginning"
						"\n\t2. Insert at the end"
						"\n\t3. Insert at a given position "
						"\n\t4. Insert before a given position"
						"\n\t5. Insert after a given position"
						"\n\t6. Insert before a given number"
						"\n\t7. Insert after a given number"
						"\n\t8. Insert at the middle"
						"\n\t9. Insert at penultimate node.");
				display();
				printf ("\nEnter the option:");
				scanf ("%d", &ch);
				switch (ch) {
					case 1: 
						ins_beg(); // insert element at begining of linked list
						break;
					case 2:
						ins_end (); // insert element at end.
						break;
					case 3:			// insertion at given position
						printf ("\nEnter the position you want to insert");
						scanf ("%d",&pos);
					 	(pos == (size + 1)) ? ins_end() : ins_pos (pos); //insert element at postion required
						break;
					case 4:   // insertio befoer given postion
						printf ("\nEnter the position before which you want to insert");
						scanf ("%d", &pos);
						ins_pos (pos - 1);
						break;
					case 5:   // insertion after given postion
						printf ("\nEnter the position after which you want to insert");
						scanf ("%d", &pos);
						ins_pos (pos + 1);
						break; 
					case 6:			// insertion before given number
						printf ("enter number before which you want to insert");
						scanf ("%d", &pos);
						pos = search (pos);
						if (pos > 1) {
							ins_pos (pos);
						} else if (1 == pos) {
							ins_end();
						}
						break;
					case 7:  //insertion at node after number given
						printf ("enter number after which you want to insert");
						scanf ("%d", &pos);
						pos = search (pos);
						if (pos > 0 && pos < size  ) {
							ins_pos (pos + 1);
						} else if (size == pos) {
							ins_beg ();
						}
						break;
					case 8:
						ins_pos (((size + 1) / 2) + 1);  //insertion at middle node
						break;
					case 9:
						ins_pos(size); // insertion at penultmiate node
						break;
					default :
						printf ("\ninvalid option");

				}
				display ();
				m = 'o';
				while (1) {
					printf ("\nDo you want to insert another element(y/n)?:");
					scanf (" %c", &m);
					if (m == 'y' || m == 'n') {
						break;
					}
				}

			}
		} else if (ch == 2) {
			m = 'y';
			while (m == 'y') {
				system("clear");
				printf ("\n\t       MENU for CSLL DELETION      \n"
						"\n\t1. DELETE at the beginning"
						"\n\t2. DELETE at the end"
						"\n\t3. DELETE at a given position "
						"\n\t4. DELETE before a given position"
						"\n\t5. DELETE after a given position"
						"\n\t6. DELETE before a given number"
						"\n\t7. DELETE after a given number"
						"\n\t8. DELETE at the middle"
						"\n\t9. DELETE at penultimate node.");
				printf ("\nEnter the option:");
				scanf ("%d", &ch);
				switch (ch) {
					case 1: 
						del_pos(1); // delete element at begining of linked list
						break;
					case 2:
						del_pos(size); // delete element at end.
						break;
					case 3:
						printf ("\nEnter the position you want to Delete");
						scanf ("%d",&pos);
						del_pos (pos); //delete  element at postion required
						break;
					case 4:  // delete node before given postion
						printf ("\nEnter the position before which you want to delete");
						scanf ("%d", &pos);
						del_pos(pos - 1);
						break;
					case 5:    // delete node after given postion
						printf ("\nEnter the position after which you want to delete");
						scanf ("%d", &pos);
						del_pos (pos + 1);
						break;
					case 6: // delete node before given number
						printf ("enter number before which you want to delete");
						scanf ("%d", &pos);
						pos = search (pos);
						if (pos) {
							pos --;
							del_pos (pos);
						}
						break;
					case 7:   // delete node after given number
						printf ("enter number after which you want to insert");
						scanf ("%d", &pos);
						pos = search (pos);
						if (pos) {
							pos++;
							del_pos (pos);
						}
						break;
					case 8:           // deletion at middle node
						del_pos ((size + 1)/2);
						break;
					case 9:
						del_pos (size - 1); // deltion at peuultmiate node
						break;
					default :
						printf ("\ninvalid option");

				}
				display ();
				m = 'o';
				while (1) {
					printf ("\nDo you want to Delete another element(y/n)?:");
					scanf (" %c", &m);
					if (m == 'y' || m == 'n') {
						break;
					}
				}

			}

		} else {
			printf ("\nINVALID option enter 1 or 2");
		}
		m = 'o';
		while (1) {
			printf ("\nDo you want to perform another operation(y/n)?:");
			scanf (" %c", &m);
			if (m == 'y' || m == 'n') {
				break;
			}
		}

	}
	return 0;
}
void ins_beg()
{
	temp = (struct node*) malloc (sizeof (struct node));
	printf ("\nEnter the element you want to insert");
	scanf ("%d", &temp -> data);
	if (end) {
		temp -> link = end -> link;
		end -> link = temp;
		size++;
		temp = NULL;
	} else {
		end = temp;
		temp -> link = temp;
		temp = NULL;
		size ++;
	}

}

void ins_end ()
{
	if (0 == size) {
		ins_beg();
	} else {
		temp = (struct node*) malloc (sizeof (struct node));
		printf ("\nEnter the element you want to insert");
		scanf ("%d", &temp -> data);
		temp -> link = end -> link;
		end -> link = temp;
		end = temp;
		temp = NULL;
		size ++;
	}
}

void ins_pos (int pos)
{
	int i;

	if (pos > (size + 1) || pos < 0) {
		printf("\npostion is beyond list size");
	} else if (1 == pos || pos == (size + 1)) {
		ins_beg();
	} else if (size  == pos || 0 == pos) {
		ins_end();
	} else {
		p = end;
		for (i = 1 ; i < pos; i++, p = p -> link);		
		temp = (struct node*) malloc (sizeof (struct node));
		printf ("\nEnter the element you want to insert");
		scanf ("%d", &temp -> data);
		temp -> link = p -> link;
		p -> link = temp;
		temp = NULL;
		size ++;
	}
}


int search (int num) // to serach the given number in list and returns the position
{
	int i;		

	if (0 == size) {
		printf ("\nlist is empty to search");
	} else {
		p = end -> link;
		for (i = 1; (p -> data != num) && (p != end); p = p -> link, i++);
		if (p == end) {
			if (num == p -> data) {
				return i ;
			} else {
				printf ("Given number not found in the list");
				return 0;
			}
		} else {
			return i;
		}

	}
	return 0;
} 

void display (void)  //function to display the linked list
{
	if (0 == size) {
		printf ("\nCircular list is Empty");
	} else {
		printf ("\ncircular single linked list elements:\n");
		for (p = end -> link; p != end; p = p -> link) {
			printf ("%d -> ", p -> data);
		}
		printf ("%d\n", p -> data);
	}
}
void del_beg ()
{
	temp = end -> link;
	printf ("\nthe element you are deleting is %d", temp -> data);
	end -> link = temp -> link;
	free(temp);
	size --;
}
void del_end ()
{
	for (p = end -> link; p -> link != end ; p = p -> link);
	printf ("\nthe element you are deleting is: %d", end -> data);
	p -> link = end -> link;
	free (end);
	end = p;
	size--;
}
void del_pos (int pos)
{
	int i ;

	p = end;

	if (size == 0) {
		printf ("\nlinked list is empty to delete");
	} else if (pos < 0 || pos > size + 1) {
		printf ("\ninvalid position");
	} else if (pos == 1 || pos == size + 1) {
		del_beg();
	} else if (pos == size || 0 == pos) {
		del_end();
	} else {
		p = end -> link;
		for (i = 1; i < (pos - 1) ; p = p -> link);
		printf ("\nthe element you are going to delete is :%d", p -> link -> data);
		temp = p -> link;
		p -> link = temp -> link;
		free (temp);
		size --;
	}

}
