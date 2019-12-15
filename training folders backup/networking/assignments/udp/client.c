#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#define handle_error(message)\
		perror (message);\
		exit (EXIT_FAILURE)

int main ()
{
	int socket_fd;
	struct sockaddr_in servaddr;
	socklen_t len;
	char message[100];
	char received[100];

	socket_fd = socket (AF_INET, SOCK_DGRAM, IPPROTO_UDP);

	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htonl(5486);
	servaddr.sin_addr.s_addr = inet_addr ("172.16.5.28");
	
	if (socket_fd < 0) {
		handle_error ("socket creation failed\n");
	}

	while (1) {
		if (NULL == fgets (message, 100, stdin)) {
			handle_error ("getting input from stdin failed\n");
		}
		if (0 > sendto (socket_fd, message, 100, 0, 
					(struct sockaddr*) (&servaddr),	sizeof(servaddr))) {

		}
		recvfrom (socket_fd, &received, 100, 0, (struct sockaddr*) (&servaddr), &len);
		printf ("server: %s\n", received);
	}

	close (socket_fd);	
	return 0;

}

