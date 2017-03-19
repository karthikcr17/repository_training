#include<stdio.h>

void bit_swap2(int, int, int, int);
extern int show(int );

int snum, dnum;   //source and destination number
int sbit, dbit;   //source and destination bits where you can swap


//program on swaping two bits between two numbers

int main()
{
	printf("enter the source number\n");
	scanf("%d",&snum);
	
	printf("enter the destination number\n");
	scanf(" %d",&dnum);
	
	printf("before swaping the numbers is\n");

	show(snum);
	show(dnum);

	printf("enter the position to swap bit on snum\n");
	scanf(" %d",&sbit);

	printf("enter the position to swap bit on dnum\n");
	scanf(" %d",&dbit);

	bit_swap2(snum, dnum, sbit, dbit);

	printf("\n");

}
void bit_swap2(int snum, int dnum, int s, int d)
{
	int l, r;             // mask1 and mask2
                              /* finding s and d positions bits
                             in given two numbers using bitwise AND */
	l = snum & (1 << s); 
	r = dnum & (1 << d);  

	if (l != r) {
		snum = snum ^ (1 << s);
		dnum = dnum ^ (1 << d);
	}

	printf("after swaping bits number is\n");

	show(snum);
	show(dnum);
}

