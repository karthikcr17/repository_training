/*
 *
 ****** Asynchronuous alarm by creating child process *********
 *
 */

#include "errors.h"
#include <sys/wait.h>

#if 1
int main( void )
{
	int seconds;
	char line[120];
	char message[64];
	pid_t pid; // process ID variable
	//	pid_t pid1;
	int pid1;


	while(1) {

/*		do {
			pid1 = waitpid (-1, NULL, WNOHANG);
			if (pid1 == -1)
				break;
		} while (0 != pid1) ;*/

		printf("Alarm >> ");

		if(fgets(line, sizeof(line), stdin) == NULL) 
			exit(0);
		if(strlen(line) <= 1)
			continue; //if given string length is less than = 1 it again prompts for input
		pid = fork ();
		if (pid > 0) {
//			continue;
		} else if (pid == 0) {
			// child process where sleep takes given input  as seconds and message	
			if(sscanf(line, "%d %64[^\n]", &seconds, message) < 2) {
				fprintf(stderr, "Bad command \n");
			} else {
				sleep(seconds);
				printf("(%d) %s \n", seconds, message);
			}
			exit (0);
		} else {
			perror ("fork failed");
			exit (0);
		}
	}

	return 0;
}
#endif


