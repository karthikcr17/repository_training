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
	int value;
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
	while(1) {

		st = sem_wait(sem); 
		if(st < 0) 
			err_abort(st, "sem post is failed "); 

		memcpy(&value, sem, sizeof(int));

		st = sem_post(sem);
		if(st < 0)
			err_abort(st, "sem wait is failed ");

		if(value == 58)
			printf("value %d \n",value);
	}




	close(fd);

	sem_unlink("/send");
	shm_unlink("/send");

	return 0;
}


	

