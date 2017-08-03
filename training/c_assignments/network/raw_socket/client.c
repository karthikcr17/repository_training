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
	char buff[100] = "hiii server";
	struct sockaddr_in my_addr;
	socklen_t size = sizeof(struct sockaddr_in);

	memset(&my_addr, '\0', sizeof(struct sockaddr_in));
	
	my_addr.sin_family = PF_INET;
	my_addr.sin_port = htons(0);
	my_addr.sin_addr.s_addr = inet_addr("172.16.5.101");

	sok_fd = socket(PF_INET,SOCK_RAW, 100);
	if(sok_fd < 0){
		perror("socket");
		exit(1);
	}


	printf("hello\n");
	status = sendto(sok_fd, buff, 4096, 0,(struct sockaddr *)&my_addr, size);
	if(status < 0) {
		perror("sendto");
		exit(1);
	}

	memset(buff, '\0', sizeof(buff));

	return 0;
}

