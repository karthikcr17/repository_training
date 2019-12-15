#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
int g_var = 20;
int main( void )
{
	int fd;

	fd = open("/dev/mychar", O_RDWR);

	if(fd < 0) {
		perror("unable to open the device");
	} else {
		printf("file opened successfully %d \n", fd);
	}
	
	printf ("global variable value before changing: %d", g_var);
	printf ("in app pid is : %d \n", getpid());	
	printf ("address is %p\n", &g_var);	
	if (-1 == ioctl (fd, getpid(), &g_var)) {
		perror ("icotl failed");
		exit (EXIT_FAILURE);
	}
	getchar();
	printf ("global variable value after changing: %d", g_var);
	close(fd);

	return 0;
}
