#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#if 1

int global = 10;

int main (int argc, char* argv[])
{
	int stack = 20;
	int *heap = NULL;
	int fd1 ;
	int fd;
	pid_t pid ;

	fd = open("/dev/myChar", O_RDWR);                                           

	if(fd < 0) {
		perror("unable to open the device");                                    
	} else {
		printf("file opened successfully %d \n", fd);                           
	}            

	fd1 = open (argv[1], O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if(fd1 < 0) {
		perror("unable to open the file");
	} else {
		printf("file opened successfully %d \n", fd);
	}


	if (NULL == (heap = (int *) malloc (sizeof (int)))) {
		perror ("malloc failed to allocate");
		exit (0);
	}
	*heap = 30;
	printf("before creating child process\n");
	printf("global = %d\taddress : %p\n", global, &global);
	printf("stack = %d\taddress : %p\n", stack, &stack);
	printf("heap = %d\taddress : %p\n", *heap, &heap);

	pid = fork();
	if (pid > 0) { //parent process
		if (-1 == wait (NULL)) {
			perror ("wait failed");
			exit (0);
		}
		printf("in parent\n");
		printf("global = %d\taddress : %p\n", global, &global);
		printf("stack = %d\taddress : %p\n", stack, &stack);
		printf("heap = %d\taddress : %p\n", *heap, &heap);

		if (-1 == write (fd1, "Global Edge", 11)) {
			perror ("writing into file failed");
			exit (0);
		}
		if (-1 == ioctl(fd, getpid(), fd1 )) {
			perror ("ioctl failed");
			exit (0);
		}

		close (fd1);

	} else if (pid == 0) {	//child process

		global = 40;
		stack = 50;
		*heap = 60;

		if (-1 == write (fd1, "CHILD process ", fd1)) {
			perror ("writing into file failed");
			exit (0);
		}
	
		if (-1 == ioctl(fd, getpid(), fd1 )) {
			perror ("ioctl failed");
			exit (0);
		}
		close (fd1);
	} else {
		perror ("fork failed to create child process");
	}
	return 0;
}

#endif
