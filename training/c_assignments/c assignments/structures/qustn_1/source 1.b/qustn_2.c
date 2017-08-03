#include<stdio.h>

typedef struct frame2
{
	unsigned int checksum:16;
	unsigned int urgent:16;
	unsigned int header_length:4;
	unsigned int reserved:6;
	unsigned int code_bits:6;
	unsigned int window:16;
	unsigned int acknowledgment:32;
	unsigned int sequence_number:32;
	unsigned int Source_port:16;
	unsigned int Destination_port:16;
}struc_f2;

int main()
{
	struc_f2 e1;

	printf("sizeof structure %d \n",sizeof(e1));

	return 0;
} 
