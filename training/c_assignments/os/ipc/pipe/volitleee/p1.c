#include "errors.h"
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<semaphore.h>

int main()
{
	int fd;
	int st;
	int *addr = NULL;
	off_t offset, pa_offset;
	struct stat sb;
	size_t len;
	ssize_t s;
	int value;
	char buff[10];
	int i = 0;
	sem_t *sem;


	fd = shm_open("/send", O_CREAT|O_RDWR, 0664);
	if(fd < 0)
		errno_abort("shm_open is failed ");

	offset = sizeof(int) * 10;

	st = ftruncate(fd, offset);
	if(st < 0)
		err_abort(st, "ftruncate is failed ");

	st = fstat(fd, &sb);
	if(st < 0)
		err_abort(st, "fstat is failed ");

	pa_offset = offset & ~(sysconf(_SC_PAGE_SIZE) - 1);

	len = sb.st_size - offset;

	addr = (int *)mmap(NULL, len + offset - pa_offset, PROT_READ|PROT_WRITE,
			MAP_PRIVATE, fd, pa_offset);

	if(addr == MAP_FAILED)
		errno_abort("mmap is failed");

	sem = sem_open("/send", O_CREAT|O_RDWR, 0664, 0);
	if(sem == SEM_FAILED)
		errno_abort("fstat is failed ");

	while(1) {
		
		printf("enter the value \n");
		fgets(buff, 10, stdin);

		value = atoi(buff);

		st = sem_post(sem);
		st = sem_wait(sem);
		if(st < 0)
			err_abort(st, "sem post is failed ");

		memcpy(sem, &value, sizeof(int));


		st = sem_post(sem);
		if(st < 0)
			err_abort(st, "sem wait is failed ");

	}
	close(fd);

	return 0;
}




