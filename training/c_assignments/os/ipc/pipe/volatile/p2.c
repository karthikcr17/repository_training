#include "errors.h"
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<semaphore.h>
#define MAX 1024

int main()
{
	int fd;
	int st;
	int *addr = NULL;
	off_t offset, pa_offset;
	struct stat sb;
	size_t len;
	ssize_t s;
	volatile int value;
	int i = 0;
	char buff[6];
	sem_t *sem;
	

	fd = shm_open("/send", O_CREAT|O_RDWR, 0664);
	if(fd < 0)
		errno_abort("shm_open is failed ");


	addr = (int *)mmap(NULL, MAX, PROT_READ|PROT_WRITE,
										 MAP_PRIVATE, fd, 0x0);

	if(addr == MAP_FAILED)
		errno_abort("mmap is failed");
	
	
	while(1) {
		printf("enter the value \n");
		memcpy(&value, addr, sizeof(int));
		
		if(value == 58)
			printf("value %d\n",value);		

	}
	unmap

	close(fd);

	return 0;
}


	

