/*
 * implemetation of SHELL using VFORK and EXEC functions
 */

#include "bash.h"	//all the header files are in this header

#if 1
int main ( void )
{
	char *argv[MAX];
	char arr[MAX] = {'\0'};
	int i = 0;
	char * delimit = "\n ";
	pid_t pid;

	printf(" welcome to MY SHELL \n");
	
	while(1) { 

		printf("myshell$:");
		
		if (NULL == fgets(arr,MAX,stdin)) {
			perror ("reading string failed");
			exit(0);
		}

		argv[0] = (char *) strtok (arr, delimit);

		if (!(strcmp (argv[0], "exit"))) {	//exit is entered then stop my shell
			printf ("Thank you for using MY shell\n");
			exit (EXIT_SUCCESS);
		}
		
		for ( i= 0 ;(argv[i] != NULL); i++ ){
			argv[i + 1] = (char *) strtok (NULL, delimit);
		}
		
		pid = vfork();
		/* child process */
		if( pid == 0 ){
			if (-1 == 	execvp(argv[0], argv)) {
				printf(" no such command found \n");
			}
		} else if (pid > 0) {	/*parent process */
			wait(NULL);	//waits till child process completes its execution
		} else {
			perror ("vfork failed \n");
			exit (EXIT_FAILURE);
		}
	}//end of while loop
	return 0;
}

#endif

