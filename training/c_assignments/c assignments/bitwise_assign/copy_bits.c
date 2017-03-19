#include<stdio.h>

void bit_copy(int, int, int, int, int); 
extern int show(int);

int snum; //source number
int dnum; //destination number
int num_bits; //number of bits copying
int s_pos; //source position from copy
int d_pos; // destination position to paste
char dnums[50]; // it stores the source number
char snums[50]; // it stores the destination number

// program on copy perticular bits to source to destination

int main()
{
	printf("enter the source number\n");
	scanf("%s",snums);

	printf("enter the destination number\n");
	scanf(" %d",dnums);

	snum = valid(snums);
	dnum = valid(dnums);

	if((snum == 0) || (dnum = 0))
		printf("enter the valid integer \n");
	else {

		show(snum);
		show(dnum);

		printf("enter the number to copy from source position\n");
		scanf(" %d",&s_pos);

		printf("enter the number of bits copy\n");
		scanf(" %d",&num_bits);

		printf("enter the postion to paste at destination\n");
		scanf(" %d",&d_pos);

		bit_copy(snum, dnum, num_bits, s_pos, d_pos); 

		printf("\n");

	}
}


void bit_copy(int snum, int dnum, int num_bits,
		int s_pos, int d_pos) /* copying n bits from source to 
					destination numbers */
{
	int i;

	for(i=0; i<num_bits; i++) {



		if(((snum >> (s_pos - i)) & 1) ^ ((dnum >> (d_pos - i)) & 1))
			dnum = dnum ^ (1 << (d_pos - i));

	}

	show(dnum);
}















