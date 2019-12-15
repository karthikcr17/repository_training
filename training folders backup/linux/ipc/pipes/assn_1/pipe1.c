/*
 *
 *
 ***** using pipes passing string from parent to child process *******
 *
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main (int argc, char* argv[])
{
	int pipe_fd[2];		/* pipe descriptors as an array*/
	pid_t pid;
	char buf[20] = {'\0'};

	if (pipe (pipe_fd) == -1) {			//opening pipe for data transfer
		perror ("pipe failed\n");
		exit (EXIT_FAILURE);
	}

	pid = fork(); 		//spawning into child and parent process

	if (pid > 0) {			//Parent process 

//		if (close (pipe_fd[0])) {		//closing read descriptor of pipe in parent
//			perror ("close of pipe descriptor failed\n");
//			exit (EXIT_FAILURE);
//		}

		if (-1 == write (pipe_fd[1], argv[1], strlen(argv[1]))) {
			perror ("write failed in parent\n");
			exit (EXIT_FAILURE);
		}

//		if (close (pipe_fd[1])) {			//closing write descriptor of pipe
//			perror ("close of pipe descriptor failed in parent\n");
//			exit (EXIT_FAILURE);
//		}
		exit (EXIT_SUCCESS);

	} else if (pid == 0) {		/* Child process */

//		if (close (pipe_fd[1])) {  /* closing write descriptor of pipe in Child*/
//			perror ("close of pipe descriptor failed in child\n");	
//			exit (EXIT_FAILURE);
//		}

		if (-1 == read (pipe_fd[0], buf, strlen(argv[1]))) {
			perror ("read failed in child\n");
			exit (EXIT_FAILURE);
		}
	
		printf ("%s\n", buf);	
		
//		if (close (pipe_fd[0])) {	//closing read descriptor of pipe in child
//			perror ("close of pipe descriptor failed in child\n");	
//			exit (EXIT_FAILURE);
//		}
		exit (EXIT_SUCCESS);		

	} else {		//fork failed condition
		perror ("fork failed\n");
		exit (EXIT_FAILURE);
	}
	return 0;
}
