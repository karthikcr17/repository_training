#include <stdio.h>

extern void showbits (int num);
int exp1 (void);
int pro2 (void);
int exp3 (void);
int exp4 (void);
int exp5 (void);
int exp6 (void);
int exp7 (void);
int exp8 (void);
int exp9 (void);
int pro10 (void);
int exp11 (void);
int exp12 (void);
int pro13 (void);
int pro14 (void);
int pro15 (void);
int pro16 (void);
int pro17 (void);
int pro18 (void);
int pro19 (void);

int bit_swap (int, int, int);
int bit_copy (int, int, int, int, int);
int even_bit_toggle (int);
int odd_bit_toggle (int);
unsigned int left_rotate_bits (unsigned int);
unsigned int right_rotate_bits (unsigned int);
unsigned int left_rotate_n_bits (unsigned int, int);
unsigned int right_rotate_n_bits (unsigned int, int);
int cnt_trailing_set_bits (int);
int cnt_trailing_clear_bits (int);
int cnt_leading_set_bits (int);
int cnt_leading_clear_bits (int);
int setbits (int, int, int, int);
int invert (int, int, int);

int main (void)
{
	int choice;
	char check = 'y';

	while (check == 'y') {
		printf( "\n             MENU             \n\n"
				"1-swaping the bits in a number\n"
				"2-swaping the bits of 2 numbers\n"
				"3-swaping a set of bits from source to destination\n"
				"4-toggle even bits and odd bits\n"
				"5-test and setting bit position in a number\n"
				"6- Rotation of bits\n"
				"7-count number of set and cleared bits\n"
				"8-count leading and trailling set and clear bits\n"
				"9-Toggling bits from s to d\n"
				"10-setbits (x, p, n ,y)\n"
				"11-invert(x, p, n)\n"
				"12-getbits (x, p, n)\n"
				"13-maximum of 2 numbers using bitwise operations\n"
				"14-clear the right most set bit\n"
				"15-clear the left most setbit\n"
				"16-set the right most clear bit\n"
				"17-set the left most clear bit\n"
				"18-setting bits from position s to d and clear rest\n");

		printf("\nenter your chioce:");
		scanf ("%d", &choice);
		switch (choice) {
			case 1:
				exp1();
				break;
			case 2:
				pro2();
				break;
			case 3:
				exp3();
				break;
			case 4:
				exp4();
				break;
			case 5:
				exp5();
				break;
			case 6:
				exp6();
				break;
			case 7:
				exp7();
				break;
			case 8:
				exp8();
				break;
			case 9:
				exp9();
				break;
			case 10:
				pro10();
				break;
			case 11:
				exp11();
				break;
			case 12:
				exp12();
				break;
			case 13:
				pro13();
				break;
			case 14:
				pro14();
				break;
			case 15:
				pro15();
				break;
			case 16:
				pro16();
				break;
			case 17:
				pro17();
				break;
			case 18:
				pro18();
				break;
			case 19:
				pro19();
				break;
			default:
				printf("\ninvalid input");
		}

		check = '0';
		while (1) {
			if (check == 'y' || check == 'n') {
				break;
			}
			printf("\nDo you want to continue (y/n):");
			scanf(" %c", &check);
		}


	}
	return 0;
}

int exp1 (void)
{
	int n;
	int s;
	int d;

	printf ("enter the number :");
	scanf ("%d",&n);
	printf ("\nenter the source bit postion:");
	scanf ("%d",&s);
	printf ("\nenter the destination bit postion:");
	scanf ("%d",&d);
	printf ("\nbinary representation before swapping:\n");
	showbits (n);

	n = bit_swap (n, s, d);
	printf ("\nbinary representation after swapping:\n");
	showbits (n);

	return 0;

}

int bit_swap (int n, int s, int d)
{
	int src_bit;
	int des_bit;

	src_bit = (n >> (s - 1)) & 1;
	src_bit = (src_bit << (d-1));
	des_bit = (n>> (d-1)) & 1;
	des_bit = (des_bit << (s-1));
	n = n & ( ~(1 << (s-1)));
	n = n & (~ (1 << (d-1)));
	n = n | src_bit;
	n = n | des_bit;

	return n;
}                 

int pro2 (void)
{

	int snum;
	int dnum;
	int s;
	int d;
	int src_bit;
	int des_bit;

	printf("enter the source number :");
	scanf("%d", &snum);
	printf("\nenter the destination number :");
	scanf("%d", &dnum);
	printf("\nenter the source bit postion :");
	scanf("%d", &s);
	printf("\nenter the destination bit postion :");
	scanf("%d", &d);
	printf("\nbinary representation of source number before swapping:");
	showbits (snum);
	printf("\nbinary representation of destination number before swapping:\n");
	showbits (dnum);

	src_bit = (snum >> (s - 1)) & 1;

	src_bit = (src_bit << (d - 1));

	des_bit = (dnum >> (d - 1)) & 1;

	des_bit = (des_bit << (s - 1));

	snum = snum & (~ (1 << (s - 1)));

	dnum = dnum & (~ (1 << (d - 1)));

	dnum = dnum | src_bit;

	snum = snum | des_bit;

	printf ("\nbinary representation of source number after swapping:\n");
	showbits (snum);
	printf ("\nbinary representation of destination number after swapping:\n");
	showbits (dnum);                     

	return 0;
}
int exp3 (void)
{	
	int snum;
	int dnum;
	int s;
	int d;
	int n;

	printf ("enter the source number :");
	scanf ("%d", &snum);
	printf ("\nenter the destination number:");
	scanf ("%d", &dnum);
	printf ("\nenter the source bit postion:");
	scanf ("%d", &s);
	printf ("\nenter the destination bit postion:");
	scanf ("%d", &d);
	printf ("\nenter the number of bits to be copied:");
	scanf ("%d", &n);

	printf ("\nbinary representation of source number\n");
	showbits (snum);
	printf ("\nbinary representation of destination number\n");
	showbits (dnum);
	printf ("\nbinary represntation of dnum after copying\n");

	showbits (bit_copy (snum, dnum, n, s, d ));  

	return 0;

}

int bit_copy (int snum, int dnum, int n, int s, int d)
{
	snum = ((snum & ((~ (~ 0 << n)) << (s - n))) >> (s - n)) << (d -1);
	dnum = (dnum & ~ ( (~(~ 0 << n)) << (d - n))) | snum;

	return dnum;
}
int exp4 (void)
{
	int num;

	printf ("enter the number:");
	scanf ("%d", &num);
	printf ("\nthe number before toggling\n");
	showbits (num);

	printf ("\nthe number after even toggling is:\n");
	showbits (even_bit_toggle (num));
	printf ("\n the number after odd bits toggling is:\n");
	showbits (odd_bit_toggle (num));

	return 0;
}
int even_bit_toggle (int num)
{	
	int key = 2;

	while ( key ) {
		num = num ^ key;
		key = key << 2;
	}

	return num;
}
int odd_bit_toggle (int num)                                                   
{                                                                               
	int key = 1;                                                                
	while (key) {  
		num = num ^ key;
		key = key << 2;
	}

	return num;                                                                 
}
#define bit_ts(num,pos) \
	(((num >> (pos - 1)) & 1) ? showbits(num) : showbits(num | (1 << (pos-1))));

int exp5 (void)
{
	int num;
	int pos;

	printf ("enter the number");
	scanf ("%d", &num);
	printf ("\nenter the postion :");
	scanf ("%d", &pos);
	printf ("\nnumber before setting is:\n");
	showbits (num);
	printf ("\nnumber after setting is:\n"); 
	bit_ts (num, pos);

	return 0;

}

unsigned int left_rotate_bits (unsigned int num)
{

	num = num << 1 | num >> (sizeof(int) * 8 - 1);

	return num;
}
unsigned int right_rotate_bits (unsigned int num)
{

	num = num << (sizeof(int) * 8 - 1) | num >> 1;

	return num;
}
unsigned int left_rotate_n_bits (unsigned int num, int n)
{
	num = num << n | (num >> (sizeof(int) * 8 - n));

	return num;
}
unsigned int right_rotate_n_bits (unsigned int num, int n)
{
	num = num << (sizeof(int) * 8 - n) | num >> n ;

	return num;
}
int exp6 (void)
{
	unsigned int num;
	int n;

	printf ("enter the number:");
	scanf ("%d", &num);
	printf ("\nnumber of times the bits to be rotated");
	scanf ("%d", &n);
	printf ("\nthe number before rotating\n");
	showbits (num);
	printf ("\nnumber after right rotating:\n");
	showbits (right_rotate_bits (num) );
	printf ("\nnumber after left rotating:\n");                                
	showbits (left_rotate_bits (num) );   
	printf ("\nnumber after left rotating %d times:\n", n);
	showbits (left_rotate_n_bits (num, n) );
	printf ("\nnumber after right rotating %d times:\n", n);
	showbits (right_rotate_n_bits (num, n) );   

	return 0;

}

int count_set_bits (int num)
{
	int count = 0;

	while (num) {
		if (num & 1)
			count ++;
		num >>= 1;
	}

	return count;
}

int count_clear_bits (int num)
{
	int count = 0;
	while (num) {
		if (num & 1)
			count ++;
		num >>= 1;
	}                                                                        

	count = sizeof(int) * 8 - count ;

	return count;                                                               
}            
int exp7 (void)
{
	int num;

	printf ("enter the number:");
	scanf ("%d", &num);

	printf ("\nnumber of set bits are :%d", count_set_bits (num));
	printf ("\nnumber of cleared bits are : %d\n", count_clear_bits (num));

	return 0;

}
int exp8 (void)
{
	int n;

	printf ("enter the number:");
	scanf ("%d", &n);
	showbits (n);

	printf("\nnumber of trailing set bits are:%d", cnt_trailing_set_bits(n));
	printf("\nnumber of trailing "
			"clear bits are:%d", cnt_trailing_clear_bits(n));
	printf("\nnumber of leading set bits are:%d", cnt_leading_set_bits(n));
	printf("\nnumber of leading"
			" clear bits are:%d\n", cnt_leading_clear_bits(n));
	return 0;
}
int cnt_trailing_set_bits (int num)                                           
{                                                                               
	int count = 0;                                                              

	while (num & 1 ) {                                                 
		count ++; 
		num >>= 1;      
	}

	return count;

}     
int cnt_trailing_clear_bits (int num)
{
	int key = 1;
	int count = 0;
	while ((num & key) == 0 ) {
		count ++;
		key <<= 1;
		if (count > (sizeof(int) * 8) - 1)
			break;
	}

	return count;
}
int cnt_leading_set_bits (int num)
{
	unsigned int key = 1;
	int count = 0;

	key <<= (sizeof(int) * 8 - 1);

	while (num & key) {
		count ++;
		key >>= 1;
	}

	return count;
}
int cnt_leading_clear_bits (int num)
{
	unsigned int key = 1;                                                     
	int count = 0;

	key <<= (sizeof(int) * 8 - 1);

	while (!(num & key)) {
		count ++;
		key >>= 1;
	}

	return count;     
}
int pro10 (void)
{
	int x;
	int p;
	int n;
	int y;

	printf ("enter the number x:");
	scanf ("%d", &x);
	printf ("\nenter the postion:");
	scanf ("%d", &p);
	printf ("\nenter the number of bits :");
	scanf ("%d", &n);
	printf ("\nenter the number y:");
	scanf ("%d", &y);
	printf("\nnumber x before modification");
	showbits (x);
	printf("\nnumber y before modification");
	showbits (y);
	printf("\nnumber y after modification");
	showbits (setbits (x, p, n, y));

	return 0;
}

int setbits (int x, int p, int n, int  y)
{
	x = ((x >> (p - n)) &  ~ (~0 << n)) << ((sizeof(int) * 8 - n));
	y = y & ~ (0 >> n);
	x = x | y;

	return x;
}

int exp11(void)
{
	int n;
	int x;
	int p;

	printf ("enter the number:");
	scanf ("%d", &x);
	printf ("\nenter the positon:");
	scanf ("%d", &p);
	printf ("\nenter the number of bits:");
	scanf ("%d", &n);
	printf ("\nnumber before inverting :");
	showbits (x);                                                               
	printf ("\nnumber after inverting bits:" );
	showbits (invert (x, p, n));                                                

	return 0;                                                                   

}

int invert(int x, int p, int n)
{
	int y = 0;
	int i;

	for(i = 0; i < n; i++) {
		y = ((x & (1U << ((p - 1) + i))) | (y << 2));
		x = ((x & (~(1U << ((p - 1) + i)))));
	}

	y = (y >> (n - 1));

	return (x | y);
}

#define getbits(x, p, n) (x & (~ (~ 0 << n) << (p - 1))) >> (p -1) 
int exp12 (void)
{
	int x;
	int p;
	int n;

	printf ("enter the number x:");
	scanf("%d", &x);
	printf ("\n enter the postion p:");
	scanf ("%d", &p);
	printf ("\nenter the number of bits n:");
	scanf ("%d", &n);
	showbits (x);

	x =  getbits(x, p, n);

	printf("%d\n", x);

	showbits (x);

	return 0;
}
// macro for finding max of two numbers

#define max(a,b) { for(i=0;i<=31;i++) { if(((a>>i)&1)==0 && ((b>>i)&1)==1 ) \
	{ max=b; } if(((a>>i)&1)==1&&((b>>i)&1)==0){max=a;}  }}

int pro13 (void)
{
	int a;
	int b;
	int max;
	int i;
	printf ("\nenter number a: ");
	scanf("%d", &a);
	printf ("\nenter number b: ");
	scanf("%d", &b);

	max(a,b);
	printf ("\nmaximum of two numbers");
	printf("%d\n",max);

	return 0;
}
// macro for clearing right most set bit

#define rmsb_clear(n) ((n) & (n - 1))

int pro14(void)
{
	int n;

	printf ("\nEnter the number:");
	scanf("%d", &n);
	printf ("\nbits in number before clearing right most set bit:\n");
	showbits (n);

	n = rmsb_clear (n);

	printf ("\nbits in number before after right most set bit:\n");
	showbits (n);

	return 0;
}

// macro for clearing left most set bit

#define lmsb_clear(n) {  for(i=0;i<=31;i++) { m=(n>>i)&1; if (m==1) {  n=n&~(1<<i); break;}} }

int pro15(void)
{
	int n;
	int i;
	int m;

	printf("\enter the number n:");
	scanf("%d", &n);

	showbits (n);

	lmsb_clear (n);

	showbits (n);

	return 0;
}

// macro for setting right most clear bit

#define rmcb_set(n) (n) | (n + 1)

int pro16(void)
{
	unsigned int n;

	printf("\nEnter the number n:");
	scanf("%d", &n);
	printf ("\nNumber before setting rightmost clear bit");
	showbits (n);

	n = rmcb_set (n);
	printf ("\nNumber after setting rightmost clear bit"); 
	showbits (n);

	return 0;
}
#define lmcb_set(n) { for(i=0;i<=31;i++) { m=(n>>i)&1; if (m==0) {  n=n|(1<<i); break;}} } 

int pro17 (void)
{
	unsigned int n;
	unsigned int i;
	unsigned int m;

	printf("\n enter the number:");
	scanf("%d",&n);

	showbits(n);

	lmcb_set(n);

	showbits(n);

	return 0;
}



//setting bits from position s to position d in a number and clear rest

#define set_std(n,s,d) { for(i=0;i<=31;i++) { if(i >= s - 1 && i <= d - 1 ) n=n|(1<<i); else n=n&~(1<<i); } } 

int pro18 (void)
{
	int n;
	int s;
	int d;
	int i;

	printf("\nenter the number:");
	scanf ("%d", &n);
	printf("\nenter the source s:");
	scanf ("%d", &s);
	printf("\nenter the destination d:");
	scanf("%d", &d);
	showbits(n);
	set_std(n,s,d);

	showbits(n);

	return 0;
}
// clearing bits from position s to d in a number and set the rest

#define clear_std(n,s,d) { for(i=0;i<=31;i++) { if(i>=s-1 && i<=d-1 ) n=n&~(1<<i); else n=n|(1<<i); } } 

int pro19 (void)
{
	int n;
	int s;
	int d;
	int i;

	scanf("%d %d %d",&n,&s,&d);
	showbits(n);
	clear_std(n,s,d);

	showbits(n);

	return 0;
}

// toggling bits from s to d and remaining unchanged

#define toggle_std(n,s,d) { for(i=s-1;i<=d-1;i++) { n=n^(1<<i); } } 

int exp9(void)
{
	int n;
	int s;
	int d;
	int i;

	printf("\nenter the number n:");
	scanf("%d", &n);
	printf("\nenter the source s:");
	scanf ("%d", &s);
	printf("\nenter the destination d:");
	scanf("%d", &d );

	showbits(n);
	toggle_std(n,s,d);

	showbits( n );

	return 0;
}



