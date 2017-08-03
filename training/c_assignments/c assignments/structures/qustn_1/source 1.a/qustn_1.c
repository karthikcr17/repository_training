#include<stdio.h>
#pragma pack(1)

typedef struct frame1
{

	unsigned int HEC:8;
	unsigned int CLP:1;
	unsigned int PTI:3;
	unsigned int VC1:16;
	unsigned int VP1:8;
	unsigned int GFC:4;
}struc_f1;

int main()
{
	struc_f1 e1;

	printf("sizeof structure %d \n",sizeof(e1));
}

