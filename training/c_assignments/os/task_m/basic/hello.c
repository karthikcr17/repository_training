#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
//	getchar();

	char **environ;
	char *buff;
	int fd;
	
/*	fd = open("filell.c",O_RDONLY);
	printf("%d\n",fd);	
*/
	fd = dup(1);

//	printf("%d\n",fd);	
//	close(1);
//	write(fd,"hellllooo", 11);
	write(fd, buff, 10);

	printf("buff %s\n",buff);
	execlp("ls","ls",NULL); 


	//dup2(1,fd);
	//printf("hii world \n");
	return 0;
}
