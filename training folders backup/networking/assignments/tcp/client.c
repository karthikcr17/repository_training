#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include "errors.h"
#define MAX 50

int main (int argc, char *argv[])
{
	int ptr;
	int sock_fd;
	char buf[50];
	struct sockaddr_in cl_addr;

	if (argc < 3) {
		printf("Enter port number and ip address\n");
		exit(EXIT_FAILURE);
	} else {

		cl_addr.sin_family = AF_INET;
		cl_addr.sin_port = htons (atoi(argv[1]));
		cl_addr.sin_addr.s_addr = inet_addr(argv[2]);
		
		if (-1 == (sock_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP))) {
			errno_abort ("Assigning a session failed\n");
		}	
		
		ptr = sizeof(struct sockaddr);
		if (-1 == connect(sock_fd, (struct sockaddr *)&cl_addr, ptr)) {
			errno_abort("Not able to connect \n");
		}

		while (1) {

			printf("Enter Data to send :");

			if (NULL == fgets(buf, MAX, stdin)) {

				if (-1 == close (sock_fd)) {
					errno_abort ("Closing session failed\n");
				}		

				err_abort(errno, "Fgets Failed\n");
			}

			if (-1 == write(sock_fd, buf, MAX)) {
				errno_abort("Sending data to buffer failed\n");
			} 

			if (-1 == read(sock_fd, buf, MAX)) {
				errno_abort ("Receiving data from buffer failed\n");
			}
			
			printf("server : %s\n", buf);
		}
	}

	return 0;	
}
