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
	char send_mesg[100] = "hello server";	

	soc_addr = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(soc_addr < 0) {
		perror("sock_adr");
		exit(1);
	}

	my_addr.sin_family = PF_INET;
	my_addr.sin_port = htons(6444);
	my_addr.sin_addr.s_addr = inet_addr("172.16.5.101");


	int c = connect(soc_addr, (struct sockaddr *)&my_addr, size);
	if(c < 0) {
		perror("connection failed");
		exit(1);
	}
	
	write(soc_addr, send_mesg, 103);

	read(soc_addr, rec_mesg, sizeof(rec_mesg));

	printf("receving msg from server %s \n", rec_mesg);

	close(new_fd);
	close(soc_addr);

	return 0;
}
	 

