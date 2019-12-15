/*********** CIRCULAR DOUBLY LINKED LIST *******************/
# include <stdio.h>
# include <stdlib.h>

void ins_pos (int);
void display ();
int search (int);
void del_pos (int pos);
struct node {
	int data;
	struct node *r_link;
	struct node *l_link;
};

struct node* end;
struct node* temp;
struct node* p;

int count;
int n;

int main ()
{
	int ch;
	int pos;
	char m = 'y';
	while (m == 'y') {
		system ("clear");
		printf ("\n   OPERATIONS TO BE PERFORMED ON DLL");
		printf ("\n  1.INSERT\n  2.DELETE\nDo you want to insert or delete? :");
		scanf ("%d", &ch);

		if (ch == 1) {
			m = 'y';
			while (m == 'y') {
				system("clear");
				printf ("\n\t       MENU INSERT DLL           \n"
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
				printf ("%d",count);
				printf ("\nEnter the option:");
				scanf ("%d", &ch);
				switch (ch) {
					case 1: 
						ins_pos(1); // insert element at begining of linked list
						break;
					case 2:
						ins_pos(count + 1); // insert element at end.
						break;
					case 3:
						printf ("\nEnter the position you want to insert");
						scanf ("%d",&pos);
						ins_pos (pos); //insert element at postion required
						break;
					case 4:
						printf ("\nEnter the position before which you"
								" want to insert");
						scanf ("%d", &pos);
						ins_pos (pos - 1);
						break;
					case 5: 
						printf ("\nEnter the position after which you want to insert");
						scanf ("%d", &pos);
						ins_pos (pos + 1);
						break;
					case 6:
						printf ("enter number before which you want to insert");
						scanf ("%d", &pos);
						(pos = search (pos))? ins_pos (pos): printf (".");
						break;
					case 7:
						printf ("enter number after which you want to insert");
						scanf ("%d", &pos);
						(pos = search (pos))? ins_pos (pos + 1) :printf (".") ;
						break;
					case 8:
						ins_pos ( (count + 1) / 2);
						break;
					case 9:
						ins_pos (count);
						break;
					default :
						printf ("\ninvalid option");

				}
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
				system ("clear");
				printf ("\n\t       MENU DELETE DLL       \n"
						"\n\t1. DELETE at the beginning"
						"\n\t2. DELETE at the end"
						"\n\t3. DELETE at a given position "
						"\n\t4. DELETE before a given position"
						"\n\t5. DELETE after a given position"
						"\n\t6. DELETE before a given number"
						"\n\t7. DELETE after a given number"
						"\n\t8. DELETE at the middle"
						"\n\t9. DELETE at penultimate node.");
				display();
				printf ("\nEnter the option:");
				scanf ("%d", &ch);
				switch (ch) {
					case 1: 
						del_pos(1); // insert element at begining of linked list
						break;
					case 2:
						del_pos (count); // insert element at end.
						break;
					case 3:
						printf ("\nEnter the position you want to Delete");
						scanf ("%d",&pos);
						del_pos (pos); //insert element at postion required
						break;
					case 4:
						printf ("\nEnter the position before which you"
								" want to delete");
						scanf ("%d", &pos);
						del_pos (pos - 1);
						break;
					case 5: 
						printf ("\nEnter the position after which you"
								" want to delete");
						scanf ("%d", &pos);
						del_pos (pos + 1);
						break;
					case 6:
						printf ("enter number before which you want to delete");
						scanf ("%d", &pos);
						pos = search (pos);
						if (pos) {
							pos = pos - 1;
							del_pos (pos);
						}
						break;
					case 7:
						printf ("enter number after which you want to delete");
						scanf ("%d", &pos);
						pos = search (pos);
						if (pos) {
							pos++;
							del_pos (pos);
						}
						break;
					case 8:
						del_pos ((count + 1) / 2);
						break;
					case 9:
						del_pos (count - 1);
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
	printf ("\nEnter the element you want to insert:");
	scanf ("%d", &temp -> data);
	if (count == 0) {
		temp -> r_link = temp;
		temp -> l_link = temp;
		end = temp;
	} else {
		temp -> r_link = end -> r_link;
		temp -> l_link = end;
		temp -> r_link -> l_link = temp;
		end -> r_link = temp;
	}
	count++;

}
void ins_pos (int pos)
{
	int i;

	p = end;
	temp = (struct node*) malloc (sizeof(struct node));

	if ( pos < 0 || ( pos > ( count + 1 ) ) ) {
		printf ("\nElement can't be inserted due to invalid postion");
	} else if (pos == 1 || count == 0) {
		ins_beg();
		temp = NULL;
	} else if (pos == 0 || pos == count + 1) {
		ins_beg();
		if (count) 
			end = temp;
		temp = NULL;
	} else {
		for(p = end -> r_link, i = 1; i < pos - 1; p = p -> r_link);
		printf ("\nEnter The number you want to insert:");
		scanf ("%d", &temp -> data);
		temp -> r_link = p -> r_link;
		temp -> l_link = p;
		p -> r_link = temp;
		temp -> r_link -> l_link = temp;
		temp = NULL;
		count ++;
	}
	free(temp);
}

void display ()
{
	if (count == 0) {
		printf ("\nLINKED LIST IS EMPTY");
	} else {
		printf ("\nCircular Doubly linked list elements are:\n");
		for (p = end -> r_link; p != end ; p = p -> r_link) {
			printf ("%d <--> ", p -> data);
		}
		printf ("%d", p -> data);
	}
}

int search( int num )
{
	int i = 1;

	if (count == 0) {
		printf ("\nlist is empty to search");
	} else {
		for (p = end -> r_link ; (p != end) && (p -> data != num); p = p -> r_link, i++);
		if (p -> data == num) {
			return i; 
		} else {
			printf("\nNumber not found");
			return 0;
		}
	}
	return 0;
}

void del_pos (int pos)
{
	int i;

	if (count == 0) {
		printf ("\nList is empty to delete");
	} else if (pos <= 0 || pos > count) {
		printf ("\nInvalid Position to delete");
	} else if (1 == pos) {
		p = end;
		end = end -> r_link;
		end -> l_link = NULL;
		free(p);
		count --;
	} else {
		p = end;
		for (i = 1; i < pos ; i++) {
			p = p -> r_link;
		}
		if (p -> r_link)
			p -> r_link -> l_link = p -> l_link;
		p -> l_link -> r_link = p -> r_link;
		free (p);
		p = NULL;
		count --; 
	}
}
