#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#define LIMIT 2147483648u
#define MAX 100
#define KRED  "\x1B[31m"
#define KNRM  "\x1B[0m"

void signal_handler (int signum) {

	if (signum == SIGTSTP) {
		printf ("%sterminal stop signal received\n", KRED);
	} else if (signum == SIGINT) {
		printf ("%sSignal Interrupt occured process exiting\n", KRED);
		printf ("%s", KNRM);
	}
}


int myatoi (void)                                                          
{                                                                               
	int i = 0;                                                                  
	unsigned int n = 0;
	char str[MAX];
	short int flag = 0;

	signal (SIGTSTP, signal_handler);
	signal (SIGINT, signal_handler);

	while (1) {
		flag = 0;
		n = 0;
		i = 0;
		if (NULL == fgets (str, MAX, stdin)) {
			perror ("given EOF\n");
			continue;
		}
		if (*str == '-' || *str  == '+') {
			i++;                                                                    
		}
		if (* str == '.') {
			printf ("%sInvalid input enter again\n", KRED);
			continue;
		}                                                     

		for ( ; *(str + i) != '\n'; ) {
			if (*(str + i) >= '0' && *(str + i) <= '9') {
				n = 10 * n + ( str[i] - '0') ;
				i++;
			} else {
				printf ("\n%sInvalid input enter again\n", KRED);
				flag = 1;
				break;
			}
		}
		if (flag) {
			continue;
		}
		if (i > 12) {
			printf ("%sOut of Range (Integer range is -2,147,483,648"
					" to 2,147,483,647)enter again:\n", KRED);
			continue;
		}
		if (n <= LIMIT) {
			i = (int) n;
			if (str[0] == '-') {
				i = -i;
			}
			printf ("%s", KNRM);
			return i;
		} else {
			printf ("%sOut of Range (Integer range is -2,147,483,648"
					" to 2,147,483,647)enter again:\n", KRED);
		}
	} //end of outer while loop
}

