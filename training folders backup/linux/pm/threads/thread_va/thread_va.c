/*
 *
 **** Thread creation and checking for virtual address space of 
 thread group and thread in user space and kernel space **********
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
#include <asm/atomic.h>
void* func (void *); //thread alarm function

int fd;
int fd1;
int data_var = 20;
int main( int argc, char *argv[] )
{
	int status ; //status of thread function
	int *h_var = NULL;
	int loc_var;
	pthread_t th_id; //thread id variable

	if (NULL ==	(h_var = (int *) malloc (sizeof (int)))) {
		perror ("malloc  failed ");
		exit (0);
	} 

	*h_var = 20;
	fd = open("/dev/myChar", O_RDWR);

	if(fd < 0) {
		perror ("opening device failed\n");
	} else {
		printf("file opened successfully %d \n", fd);
	}

	fd1 = open (argv[1], O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR); //opening another file 

	if(fd1 < 0) {
		perror("unable to open the file");
	} else {
		printf("file opened successfully %d \n", fd1);
	}

	printf ("values in TGL before invoking thread\n");
	printf ("address of local variable%p\n", &loc_var);
	printf ("heep variable data %d\n", *h_var);
	printf ("data section variable data %d\n", data_var);
	printf ("pid = %ld\n", syscall (SYS_gettid));

	if (status = pthread_create (&th_id, NULL, func, h_var)) { // creating threads
		err_abort(status, "pthread failed");
	}

	if (-1 == write (fd1, "Global Edge", 11)) {
		perror ("writing into file failed");
		exit (0);
	}

	if (-1 == ioctl (fd, getpid(), fd1)) {
		perror ("ioctl failed");
		exit (0);
	}

	if (status = pthread_join (th_id, NULL)) {  //wait tills the given thread completes its execution
		err_abort (status, "thread joining failed");		
	}

	close (fd1);

	printf ("values after invoking thread in TGL\n");
	printf ("heep variable data %d\n", *h_var);
	printf ("data section variable data %d\n", data_var);
	pthread_exit (NULL); //calling thread waits till all the child process completes there execution

	return 0;
}

void* func (void *arg)
{
	int *var = arg;

	*var = 50; //modifing values in thread
	data_var = 60;

	sleep(1);

	if (-1 == write (fd1, "CHILD process ", 13)) {
		perror ("writing into file failed");
		exit (0);
	}
	if (-1 == ioctl (fd, getpid(), fd1)) {
		perror ("ioctl failed");
		exit (0);
	}

	close (fd1);

	printf ("address of stack variable%p\n", &var);
	printf ("pid = %ld\n", syscall(SYS_gettid));
	printf ("values modified in thread\n");
	printf ("heep variable data %d\n", *var);
	printf ("data section variable data %d\n", data_var);
	printf ("Thread created\n");
}

