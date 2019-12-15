#include <stdio.h>
#include <stdlib.h>

int prg1(void);
int prg2(void);
int prg3(void);
int prg4(void);
int prg5(void);
int prg6(void);

int main(void)
{

	int ch;
	char check = 'y';

	while (check == 'y') {
		printf ("\n				Menu				\n\n"
				"	1.	Program to change upper to lower \n"
				"	2.	Program to search for a given string in a file \n"
				"	3.	Program to remove comments \n"
				"	4.	Program to count no.of words \n"
				"	5.	Program to create array of elements in structure\n"
				"	6.	Program to read info.db\n");

		printf("Enter the choice:");
		scanf("%d", &ch);

	
		switch(ch) {
			case 1: 
					prg1();
					break;
			case 2:        
            	    prg2(); 
                	break; 
			case 3:        
        	        prg3(); 
            	    break; 
			case 4:        
            	    prg4(); 
                	break; 
			case 5:        
            	    prg5(); 
                	break; 
			case 6: 
					prg6();
					break;
			default:
					printf("You entered invalid choice");

		}
			check = 'o';
			printf("\nThank you");
			while(1) {
 				printf ("\nDo you want to continue (y/n):");
				scanf (" %c", &check);
				if (check == 'y' || check == 'n') {
					break;
				}
			}
	} 
											
	return 0;
}
