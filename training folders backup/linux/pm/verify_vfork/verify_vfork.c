#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#if 1

int global = 10;

int main (void)
{
	int stack = 20;
	int *heap = NULL;
	int fd;
	pid_t pid;

	if (NULL == (heap = (int *) malloc (sizeof (int)))) {
		perror ("malloc failed to allocate");
		exit (0);
	}
	*heap = 30;
	fd = open("/dev/myChar", O_RDWR);

	if(fd < 0) {
		perror("unable to open the device");
	} else {
		printf("file opened successfully %d \n", fd);
	}
	printf("before creating child process\n");
	printf("global = %d\taddress : %p\n", global, &global);
	printf("stack = %d\taddress : %p\n", stack, &stack);
	printf("heap = %d\taddress : %p\n", *heap, &heap);
	pid = vfork();

	if (pid > 0) {
		//		wait(NULL);
		printf("in parent\n");
		printf("global = %d\taddress : %p\n", global, &global);
		printf("stack = %d\taddress : %p\n", stack, &stack);
		printf("heap = %d\taddress : %p\n", *heap, &heap);
		ioctl (fd, getpid(), 12);
	} else if (pid == 0) {
		global = 40;
		stack = 50;
		*heap = 60;

		ioctl (fd, getpid(), 12);

		exit (1);
	}
	return 0;
}

#endif
