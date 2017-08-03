#include "errors.h"
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>

#define MAX 20

int main()
{

	int fd;

	char *str = NULL;

	int status;

	if(NULL == (str = (char *)malloc(sizeof(char) * 20))) {
		printf("malloc is failed \n");
		exit(1);
	}

	status = mkfifo("./mkfifo", 0644);
	if(status != 0){
		err_abort(status, "mkfifo is failed");
	}

	fd = open("./mkfifo", O_WRONLY);
	if(fd < 0) {
		err_abort(fd, "open is failed");
	}

	printf("enter the string \n");
	fgets(str, MAX, stdin);

	write(fd, str, 20);

	close(fd);

	unlink("./mkfifo");

	return 0;
}

 

