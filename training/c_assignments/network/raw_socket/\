#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>


int main()
{
	int sok_fd;
	int status;
	char buff[100];
	char mesg[100];
	struct sockaddr_in my_addr;
	socklen_t size =  sizeof(struct sockaddr_in);

	sok_fd = socket(PF_INET,SOCK_RAW,100);
	if(sok_fd < 0){
		perror("socket");
		exit(1);
	}



		status = recvfrom(sok_fd, buff, 100, 0, (struct sockaddr *)&my_addr, &size);

		if(status < 0) {
			perror("recvfrom");
			exit(1);
		}

		

		printf("request recevied \n");
		printf("msg %s\n",(buff + 14));


	close(sok_fd);
	return 0;
}

