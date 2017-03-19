#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct sockaddr_in my_addr;
	struct sockaddr_in res_addr;
	socklen_t size = sizeof(struct sockaddr_in);

	int soc_addr;
	int new_fd;
	int status;

	char rec_mesg[100];	
	char send_mesg[100] = "hello client";	

	soc_addr = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(soc_addr < 0) {
		perror("sock_adr");
		exit(1);
	}

	my_addr.sin_family = PF_INET;
	my_addr.sin_port = htons(6444);
	my_addr.sin_addr.s_addr = inet_addr("172.16.5.101");

	status = bind(soc_addr,(struct sockaddr *)&my_addr, sizeof(struct sockaddr_in)); 
	if(status < 0) {
		perror("bind");
		exit(1);
	}

	status = listen(soc_addr, 2);
	if(status < 0) {
		perror("listen");
		exit(1);
	}

		new_fd = accept(soc_addr, (struct sockaddr *)&res_addr, &size);
		if(new_fd < 0) {
			perror("connection failed");
			exit(1);
		}

		getchar();

		read(new_fd, rec_mesg, 105);

		printf("receving msg from client %s \n", rec_mesg);

		write(new_fd, send_mesg, sizeof(send_mesg));

	close(soc_addr);

	return 0;
}


