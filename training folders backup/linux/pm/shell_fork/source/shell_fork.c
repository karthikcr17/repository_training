/* 
 * implementation of SHELL using fork and exec functions
 */


#include "bash.h"

#if 1
int main ( void )
{
	char *argv[MAX];	//to store pointers to environmnetal variable
	char arr[MAX];		// to fetch th input from stdin
	int i = 0;
	char * delimit = "\n ";	// delimiter for seperating environmnetal varibles

	printf(" welcome to MY SHELL \n");
	
	while(1) { 

		int i = 0;
		char *delimit = "\n ";
		pid_t pid;
		char arr[MAX] = {'\0'};   	
		
		printf("myshell$:");
		
		if (NULL == fgets(arr,MAX,stdin)) {
			perror ("reading string failed");
			exit(0);
		}

		argv[0] = (char *) strtok (arr, delimit);

		for ( i= 0 ;(argv[i] != NULL); i++ ){
			argv[i + 1] = (char *) strtok (NULL, delimit);
		}

		pid = fork();
		if( pid == 0 ){
			//child process where given command executable file is loaded
			if (-1 == 	execvp(argv[0], argv)) {
				printf(" no such command found \n");
			}
		}
		else if (pid > 0){
			//parent process waits till the child process completes its execution
			wait(NULL);	//hang the parent process till execution of child
		} else {
			perror ("fork failed \n");
			exit (EXIT_SUCCESS);
		}
	}
	return 0;
}

#endif

