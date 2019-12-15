/*
 *
 **** Thread creation and checking for pid and tgid **********
 *
 *
 */
#include <stdio.h>
#include <pthread.h>
#include "errors.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/syscall.h>

void* func (void *); //thread alarm function

int main( void )
{
	int status ; //status of thread function
	int fd;
	pthread_t th_id; //thread id variable
	pid_t tid;

	fd = open("/dev/myChar", O_RDWR);

	if(fd < 0) {
		perror("unable to open the device");
	} else {
		printf("file opened successfully %d \n", fd);
	}

	status = pthread_create (&th_id, NULL, func, &fd); // creating threads

	if (status > 0) {
		err_abort(status, "pthread failed");
	}

	tid = syscall (SYS_gettid);	
	fd = open("/dev/myChar", O_RDWR);
	printf ("pid :%d\n", getpid());
/* in thread getpid() returns tgid of the thread */


	printf ("tid :%d\n", tid);
	if (-1 == ioctl (fd, getpid(), 1)) {
		perror ("ioctl failed");
		exit (0);
	}
	getchar();
	getchar();
	close (fd);
	pthread_exit (NULL); //calling thread waits till all the child process completes there execution

	return 0;
}

void* func (void *arg)
{
	int fd;
	pid_t tid;

	fd = open("/dev/myChar", O_RDWR);

	if(fd < 0) {
		perror("unable to open the device");
	} else {
		printf("file opened successfully %d \n", fd);
	}
	tid  = syscall (SYS_gettid);
	printf ("pid :%d\n", getpid());
	printf ("tid :%d\n", tid);
	printf ("\nThread created");
	if (-1 == ioctl (fd, getpid(), 1)) {
		perror ("ioctl failed");
		exit (0);
	}
}

