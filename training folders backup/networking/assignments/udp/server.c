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
	socklen_t len;
	struct sockaddr_in servaddr;
	char message[100];
	char received[100];

	socket_fd = socket (AF_INET, SOCK_DGRAM, IPPROTO_UDP);

	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(10000);
	servaddr.sin_addr.s_addr = inet_addr("172.16.5.65");
	
	if (socket_fd < 0) {
		handle_error ("socket creation failed\n");
	}

	if (bind (socket_fd, (struct sockaddr*)&servaddr, sizeof(struct sockaddr))) {
		handle_error ("binding socket failed\n");
	}

	len = sizeof (servaddr);
	
	while (1) {
		if (0 > recvfrom (socket_fd, received, 100, 0, (struct sockaddr*) (&servaddr), &len)) {
			handle_error ("receiving message from client failed\n");
		}
	
		printf ("client: %s", received);
		if (NULL == fgets (message, 100, stdin)) {
			handle_error ("getting input failed\n");
		}
		
		if (0 > sendto (socket_fd, message, 100, 0, (struct sockaddr*) (&servaddr), sizeof(servaddr))) {
			handle_error ("sending reply to client failed\n");
		}

	}
	
	close (socket_fd);
	return 0;
}

