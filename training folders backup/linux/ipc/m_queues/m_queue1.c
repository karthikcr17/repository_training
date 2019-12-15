/*
 *
 *************** messaging child from parent using message queues ***********
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>		/* for O_* constants*/
#include <string.h>
#include <sys/stat.h>	/* for mode constants*/
#include <mqueue.h>

int main (void)
{
	mqd_t mqd;				/* Message queue descriptor */
	pid_t pid;				/* Process ID */
	char *message = NULL;	/* message */
	char dup_message[20] = {'\0'};	/* duplicate string used to receive string in child */
	unsigned int prio = 1;
	struct mq_attr *attr = NULL;

	if (NULL == (attr = (struct mq_attr*) malloc (sizeof (struct mq_attr)))) {
		perror ("memory allocation failed\n");
		exit (EXIT_FAILURE);
	}

	mqd = mq_open ("/mqueue", O_CREAT | O_RDWR, 0644, attr);

	if (-1 == mqd) {	
		perror ("opening message queue failed");
		exit (EXIT_FAILURE);
	}

	if (-1 == mq_getattr (mqd, attr)) {
		perror ("getting attributes failed\n");
		exit (EXIT_FAILURE);
	}

	pid = fork ();		/* spawning into parent and child process */

	if (pid > 0) {		/* Parent Process */

		message = "hello";

		mqd = mq_open ("/mqueue", O_WRONLY);

		if (-1 == mqd) {
			perror ("open failed in parent\n");
			exit (EXIT_FAILURE);
		}

		if (-1 == mq_send (mqd, message, strlen(message), prio)) {
			perror ("sending message failed\n");
			exit (EXIT_FAILURE);
		}

	} else if (0 == pid) {	/* child process */

		mqd = mq_open ("/mqueue", O_RDONLY);

		if (-1 == mqd) {
			perror ("open failed in child\n");
			exit (EXIT_FAILURE);
		}

		/* Receiving Message from parent */
		if (-1 == mq_receive (mqd, dup_message, attr -> mq_msgsize, &prio)) {
			perror ("receiving message failed\n");
			exit (EXIT_FAILURE);
		}

		printf ("%s\n", dup_message);

		exit (EXIT_SUCCESS);

	} else {
		perror ("fork failed \n");
		exit (EXIT_SUCCESS);
	}
	if (-1 == mq_unlink ("/mqueue")) {
		perror ("unlink failed\n");
		exit (EXIT_FAILURE);
	}
	return 0;
}
