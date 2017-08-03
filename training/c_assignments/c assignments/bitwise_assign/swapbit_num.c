#include<stdio.h>

int bit_swap(int ,int , int);
extern int show(int );

int num;    //numer you can give 
int sbit, dbit; // source and destination bits where you can swap


//assign qu 1 swap two bits in a given number

int main()
{
	printf("enter the number\n");
	scanf("%d",&num);
	
	printf("before swaping the number is\n");
	show(num);

	printf("enter the positions to swap bits\n");
	scanf(" %d%d",&sbit,&dbit);


	num = bit_swap(num, sbit, dbit);

	printf("after swaping bits number is\n");

	show(num);

	printf("\n");

}

int bit_swap(int n, int s, int d) //it function swap two bits in given number
{
	int l; //it stored value of sbit position 
	int r; //it stored value of dbit position  
	l = n & (1 << s);
	r = n & (1 << d);
	if (l != r) {
		n = n ^ (1 << s);
		n = n ^ (1 << d);
	}
	return n;
}

