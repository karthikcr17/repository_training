#include "../header/sl_list.h"

struct node * start = NULL;
struct node *temp = NULL;
struct node *p = NULL;
int size;
int main ()
{
	int ch;
	int pos;
	int n;
	char m = 'y';
	while (m == 'y') {
		printf ("\n   OPERATIONS TO BE PERFORMED ON SLL");
		printf ("\n  1.INSERT\n  2.DELETE\nDo you want to insert or delete? :");
		scanf ("%d", &ch);
	
		if (ch == 1) {
		//	m = 'y';
			while (m == 'y') {
				printf ("\n       MENU            \n"
						"\n1. Insert at the beginning"
						"\n2. Insert at the end"
						"\n3. Insert at a given position "
						"\n4. Insert before a given position"
						"\n5. Insert after a given position"
						"\n6. Insert before a given number"
						"\n7. Insert after a given number"
						"\n8. Insert at the middle"
						"\n9. Insert at penultimate node.");
				printf ("\nEnter the option:");
				scanf ("%d", &ch);
				printf ("enter the number you want to insert");
				scanf (" %d", &n);
				switch (ch) {
					case 1: 
						ins_beg(n); // insert element at begining of linked list
						break;
					case 2:
						ins_end (n); // insert element at end.
						break;
					case 3:
						printf ("\nEnter the position you want to insert");
						scanf ("%d",&pos);
						ins_pos (n, pos); //insert element at postion required
						break;
					case 4:
						printf ("\nEnter the position before which you want to insert");
						scanf ("%d", &pos);
						ins_before_pos (n, pos);
						break;
					case 5: 
						printf ("\nEnter the position after which you want to insert");
						scanf ("%d", &pos);
						ins_after_pos (n, pos);
						break;
					case 6:
						printf ("enter number before which you want to insert");
						scanf ("%d", &pos);
						ins_bef_num (n,pos);
						break;
					case 7:
						printf ("enter number after which you want to insert");
						scanf ("%d", &pos);
						ins_aft_num (n,pos);
						break;
					case 8:
						ins_middle (n);
						break;
					case 9:
						ins_penultimate (n);
						break;
					case 10: 
						start = list_rev (start, NULL);
						break;

					
					default :
						printf ("\ninvalid option");
	
				}
				display ();
		//		m = 'o';
				while (1) {
					printf ("\nDo you want to insert another element(y/n)?:");
					scanf (" %c", &m);
					if (m == 'y' || m == 'n') {
						break;
					}
				}
	
			}
		} else if (ch == 2) {
		//	m = 'y';
			while (m == 'y') {
				printf ("\n       MENU            \n"
						"\n1. DELETE at the beginning"
						"\n2. DELETE at the end"
						"\n3. DELETE at a given position "
						"\n4. DELETE before a given position"
						"\n5. DELETE after a given position"
						"\n6. DELETE before a given number"
						"\n7. DELETE after a given number"
						"\n8. DELETE at the middle"
						"\n9. DELETE at penultimate node.");
				printf ("\nEnter the option:");
				scanf ("%d", &ch);
				switch (ch) {
					case 1: 
						del_pos(1); // insert element at begining of linked list
						break;
					case 2:
						del_pos (size); // insert element at end.
						break;
					case 3:
						printf ("\nEnter the position you want to Delete");
						scanf ("%d",&pos);
						del_pos (pos); //insert element at postion required
						break;
					case 4:
						printf ("\nEnter the position before which you want to delete");
						scanf ("%d", &pos);
						if (pos - 1 >= 1 && pos - 1 <= size) {
							del_pos (pos - 1);
						}
						break;
					case 5: 
						printf ("\nEnter the position after which you want to delete");
						scanf ("%d", &pos);
						del_pos (pos + 1);
						break;
					case 6:
						printf ("enter number before which you want to delete");
						scanf ("%d", &pos);
						pos = search (pos);
						if (pos) {
							pos--;
							del_pos (pos);
						}
						break;
					case 7:
						printf ("enter number after which you want to insert");
						scanf ("%d", &pos);
						pos = search (pos);
						if (pos) {
							pos++;
							del_pos (pos);
						}
						break;
					case 8:
						del_pos ((size + 1)/2);
						break;
					case 9:
						del_pos (size - 2);
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
void ins_beg(int n)
{
	ins_pos (n, 1);
}

void ins_end (int n)
{
	int pos;
	
	pos = size + 1 ;
	ins_pos (n, pos);	
}

void ins_pos (int n , int pos)
{
	int i = 1;

	p = start;
	temp = (struct node*) malloc (sizeof (struct node));
	temp -> data = n;
	
	if (pos > size + 1  || pos < 1) {
		printf("\npostion is greater than the size of list");
	} else if (pos == 1) {
		temp -> link = start;
		start = temp;
		size++;
	} else {
		while (i < pos - 1) {
			p = p -> link;
			i++;
		} 
		temp -> link = p -> link;
		p -> link = temp;
		size ++;
	}
}

void ins_before_pos (int n, int pos)
{
	pos--;
	ins_pos (n, pos);
}

void ins_middle (int n)
{
	int pos;

	pos = (size + 1) / 2;
	ins_pos (n, pos);
}

void ins_penultimate (int n) // insert number before last element
{
	int pos;
	
	pos = size ;

	ins_pos (n, pos);
}

void ins_after_pos (int n, int pos) //insert after position given
{
	pos = pos + 1;
	ins_pos (n, pos);
}

void ins_bef_num (int n, int num) //insert before number
{
	int pos;

	pos = search (num);
	if (pos) {
		ins_pos (n, pos);
	}
}

void ins_aft_num (int n, int num) // insert after given number
{
	int pos;
	
	pos = search (num) ;

	if ((pos)) {
		ins_pos(n, pos + 1);
	}
}

int search (int n) // to serach the given number in list and returns the position
{
	int pos;

	p = start;
	for (pos = 1 ; p; pos++) {
		if (p -> data == n)
			break;
		p = p -> link;
	}
	if (!p) {
		printf("\nNumber not found");
		return 0;
	} else {
		return pos;
	}
}

void display (void)  //function to display the linked list
{

	p = start;
	printf ("\nlist elements are:\n");
	while (p) {
		printf ("%d\t", p -> data);
		p = p -> link;
	}
}


void del_pos (int pos)
{
	int i ;

	p = start;

	if (pos < 1 && pos > size && size == 0) {
		printf ("\ninvalid position");
	} else if (pos == 1) {
		pos = start -> data;
		start = start -> link;
		free (p);
		size --;
		printf ("\nElement you deleted is %d",pos);
	} else {
		i = 2;
		while (i < pos) {
			p = p -> link;
			i ++;
		}
		temp = p -> link;
		p -> link = p -> link -> link;
		pos = temp -> data;
		size --;
		free (temp);
		printf ("\nelement you deleted is :%d", pos); 
	}

}
