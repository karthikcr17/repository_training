



/        /        
/hii
/ hey
/ * jio *          /
#include<stdio.h>

extern int showbits(int );  
int bit_copy(int , int, int , int , int);

int main(void)
{
	int snum;   
	int dnum;   
	int s;      
	int d;      
	int n;      

	printf("Enter the number from which bits are to be copied\n");
	scanf("%d", &snum);

	showbits(snum);  

	printf("Enter the number where the bits are to be copied\n");
	scanf("%d", &dnum);

	showbits(dnum);  

	printf("Enter the bit position in %d from where the bits are to be copied\n", snum);
	scanf("%d", &s);

	printf("Enter the bit position in %d to where the bits are to be copied\n", dnum);
	scanf("%d", &d);

	printf("Enter the number of bits to be copied from %d to %d\n", snum, dnum);
	scanf("%d", &n);

	showbits(bit_copy(snum, dnum, n, s, d));

	return 0;
}


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

