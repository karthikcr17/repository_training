/*
 *
 *
 ***** using pipes passing information from ls to wc command *******
 *
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main (void)
{
	int pipe_fd[2];		/* pipe descriptors as an array*/
	pid_t pid;			/* pid variable */

	if (pipe (pipe_fd) == -1) {			//opening pipe for data transfer
		perror ("pipe failed\n");
		exit (EXIT_FAILURE);
	}

	pid = fork(); 		//spawning into child and parent process

	if (pid > 0) {			//Parent process 

		if (close (pipe_fd[0])) {		//closing read descriptor of pipe in parent
			perror ("close of pipe descriptor failed\n");
			exit (EXIT_FAILURE);
		}

		if (-1 == dup2 (pipe_fd[1], 1)) {
			perror ("duplicating descriptors failed\n");
			exit (EXIT_SUCCESS);
		}

		execl ("/bin/ls", "ls", NULL);
		perror ("exec failed\n");

		if (close (pipe_fd[1])) {			//closing write descriptor of pipe
			perror ("close of pipe descriptor failed in parent\n");
			exit (EXIT_FAILURE);
		}
		exit (EXIT_SUCCESS);

	} else if (pid == 0) {		/* Child process */

		if (close (pipe_fd[1])) {  /* closing write descriptor of pipe in Child*/
			perror ("close of pipe descriptor failed in child\n");	
			exit (EXIT_FAILURE);
		}

		if (-1 == dup2 (pipe_fd[0], 0)) {
			perror ("duplicate failed\n");
			exit (EXIT_FAILURE);
		}

		execl ("/usr/bin/wc", "wc", NULL);
		perror ("execl failed in child");

		if (close (pipe_fd[0])) {	//closing read descriptor of pipe in child
			perror ("close of pipe descriptor failed in child\n");	
			exit (EXIT_FAILURE);
		}
		exit (EXIT_SUCCESS);		

	} else {		//fork failed condition
		perror ("fork failed\n");
		exit (EXIT_FAILURE);
	}
	return 0;
}
