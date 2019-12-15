#include <stdio.h>                                                              
#include <unistd.h>                                                             
#include <sys/types.h>                                                          
#include <sys/socket.h>                                            
#include <netinet/in.h>
#include <netdb.h> 
#include "errors.h"            
#define MAX 50                                                                  
                                                                                
int main (void)                                                                 
{                               
	int ptr;                                                
    int sock_desc;          
	int new_sd;                                                    
    char buf[50];                                                           
    struct sockaddr_in serv_addr;               

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(15001);
	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");    
                                                                                
    if (-1 == (sock_desc = socket (AF_INET, SOCK_STREAM, IPPROTO_TCP) )) {         
        errno_abort ("Assigning a session failed\n");                           
    }                                          

	if (-1 == bind (sock_desc, (struct sockaddr *)&serv_addr, sizeof(struct sockaddr)) ) {
		errno_abort("Binding failed\n");
	}                        
	
	ptr = sizeof(struct sockaddr);         

	if (-1 == listen (sock_desc, 10)) {
		errno_abort("Cannot Listen :P \n");
	}
	if (-1 == (new_sd = accept(sock_desc, (struct sockaddr *)&serv_addr, &ptr))) {
		errno_abort("I won't accept :P\n");
	}

	while (1) {


		if (-1 == read (new_sd, buf, MAX) ) {
			errno_abort ("Receiving data from buffer failed\n");                    
		}                                                                           
		
		printf("Received Data from client : %s\n\n", buf);

		printf("Enter ACK to Client : ");

		if (NULL == fgets(buf, MAX, stdin)) {                                   
			if (-1 == close (sock_desc) ) {                                              
				errno_abort ("Closing session failed\n");                               
			}                                                                           

			err_abort(errno, "Fgets Failed\n");                                 
		}                                                                       
		
		if (-1 == write (new_sd, buf, MAX) ) {
			errno_abort("Sending data to buffer failed\n");                         
		}          	

	}                                                                 
                                                                                
    return 0;                                                                   
}                                                                               

