#include<stdio.h>

typedef struct frame3
{

	unsigned int options:21;
	unsigned int padding:11;
	unsigned int destination_IP_addr:32;
	unsigned int source_IP_add:32;
	unsigned int TTL:6;
	unsigned int Protocol:10;
	unsigned int Header_checksum:16;
	unsigned int Identification:16;
	unsigned int Flags:4;
	unsigned int Fragment_offset:12;
	unsigned int Version:4;
	unsigned int Header_length:4;
	unsigned int service_type:8;
	unsigned int Total_length:16;
}stru_f3;

int main()
{
	stru_f3 e1;

	printf("size of the structure %d \n",sizeof(e1));

	return 0;
}







