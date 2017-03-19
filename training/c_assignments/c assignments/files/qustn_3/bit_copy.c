/* write a function bit_copy(int snum, int dnum, int n, int s, int d) which copies
   n bits right adjusted from bit position s in snum to bit position d in dnum */
///  /*
/*
hgjfgvj
*    *        /
// Date of creation : 13/ 11/ 2016
/        /        //jio
/hii
/ hey
/ * jio */
#include<stdio.h>

extern int showbits(int );  //call function showbits from file showbit.c
int bit_copy(int , int, int , int , int);

int main(void)
{
	int snum;   //sourc e number
	int dnum;   //destination number
	int s;      //position of bit in source number
	int d;      //position of bit in destination number
	int n;      //number of right most bits to be copied

	printf("Enter the number/* nnn */ from which bits are to be copied\n");
	scanf("%d", &snum);

	showbits(snum);  //represents snum in binary form

	printf("Enter the number where the bits are to be copied\n");
	scanf("%d", &dnum);

	showbits(dnum);  //represents dnum in binary form

	printf("Enter the bit position in %d from where the bits are to be copied\n", snum);
	scanf("%d", &s);

	printf("Enter the bit position in %d to where the bits are to be copied\n", dnum);
	scanf("%d", &d);

	printf("Enter the number of bits to be copied from %d to %d\n", snum, dnum);
	scanf("%d", &n);

	showbits(bit_copy(snum, dnum, n, s, d));

	return 0;
}

// function to copy right most n bits of snum from position s to dnum at position d
int bit_copy(int snum, int dnum, int n, int s, int d)
{
	int i;

	for (i = 0; i < n; i++) {

		if ((snum & (1 <<(s - i))) ^ (dnum & (1 << (d - i)))) {
			dnum = dnum ^ (1 << (d - i));
		}
	}
	
	return dnum;
}
/*     hiuhui    *                  /
