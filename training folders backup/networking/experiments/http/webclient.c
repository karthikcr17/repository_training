#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#define MAX 650000

int main(int argc, char** argv) 
{

	char arg[500];
	char firstHalf[500];
	char secondHalf[500];
	char request[MAX];
	char ip[40];
	struct hostent *server;
	struct sockaddr_in serveraddr;
	struct in_addr **addr_list;
	int port = 80;
	unsigned int j = 0;
	int i;
	int tcpSocket;

	if (argc != 2) {
		printf ("invalid host name \n");
		exit (1);
	}
	
	strcpy(arg, argv[1]);		

	printf("\nHost Name: %s", arg);

	if(-1 ==  (tcpSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP))) {
		perror("\nError opening socket");
		exit(1);
	}

	printf("\nSuccessfully opened socket");

	if(NULL == (server = gethostbyname (arg))) {
		perror("gethostbyname() failed\n");
		exit(1);
	}

	printf("\nserver name %s = ", server -> h_name);
	addr_list = (struct in_addr **)server -> h_addr_list;
	while (addr_list[j] != NULL) {

			strcpy(ip, (char *)(inet_ntoa(*(addr_list[j]))));
			break;
	}

	printf("ip : %s\n", ip);

	serveraddr.sin_family = AF_INET;

	serveraddr.sin_addr.s_addr = inet_addr(ip);

	serveraddr.sin_port = htons(port);
    
	printf("Connecting..... \n");
	sleep(1);
	if (-1 == (connect(tcpSocket, (struct sockaddr *) &serveraddr, sizeof(serveraddr))))  {
		perror("\nError Connecting");
		exit(1);	
	}
	
	printf("\nConnected!\n");

	strcpy(request, "GET / HTTP/1.1\r\nHost: ");
	strcat(request, arg);
	strcat(request, "\r\n\r\n");

	printf("\nRequest : %s", request);

	if (-1 == (send(tcpSocket, request, MAX , 0))) {
		perror("Error with send()");
		exit (1);
	} else {
		printf("Successfully sent html fetch request");
	}	
	printf("Request sent");

	if(-1 == (recv(tcpSocket, request, MAX, 0))) {
		perror("recv failed");
	}
	printf("Response : %s\n", request);

	close(tcpSocket);

	return 0;
}
