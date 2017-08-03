#include "errors.h"
#include<semaphore.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>

#define MAX 100

int main()
{
	int fd;
	sem_t *sem;
	int st;
	struct stat sb;
	unsigned int buff[10];
	int i = 0;


	fd = shm_open("/send", O_RDWR, 0664);
	if(fd < 0)
		errno_abort("shm_open is failed ");

	st = fstat(fd, &sb);
	if(st < 0)
		err_abort(st, "fstat is failed ");

	sem = sem_open("/send", O_RDWR);
	if(sem == SEM_FAILED)
		errno_abort("fstat is failed ");

	st = sem_wait(sem); 
	if(st < 0) 
		err_abort(st, "sem post is failed "); 

	memcpy(buff, sem, sb.st_size);

	st = sem_post(sem);
	if(st < 0)
		err_abort(st, "sem wait is failed ");
		

	printf("getting inputs from the shm \n");
		for(i = 0; i < 10; i++)
			printf("%d\n",buff[i]);

	memset(buff, 0, sizeof(buff));
	memcpy(sem, buff, sizeof(buff));

	close(fd);
	getchar();

	sem_unlink("/send");
	shm_unlink("/send");
	
	return 0;
}


	

