#include "errors.h"
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>

int main()
{

	int fd;
	char *str = NULL;

	if(NULL == (str = (char *)malloc(sizeof(char) * 20))) {
		printf("malloc is failed \n");
		exit(1);
	}


	fd = open("./mkfifo", O_RDONLY);
	if(fd < 0) {
		err_abort(fd, "open is failed");
	}

	read(fd, str, 20);

	printf("buffer in the file source\nbuff:%s \n",str);
	
	close(fd);
	
	
	return 0;
}
			
	

