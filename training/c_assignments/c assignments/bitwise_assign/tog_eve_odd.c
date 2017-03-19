#include<stdio.h>

extern void show(int );
int even_bit_toggle(int);
int odd_bit_toggle(int);

int num;

// program on toggle a even bits and odd bits

int main() 
{

printf("enter the number\n");
scanf("%d",&num);

show(num);

even_bit_toggle(num);
odd_bit_toggle(num);

printf("\n");
 
return 0;

}

int even_bit_toggle(int num)
{
num = num ^ 0xaaaaaaaa;

printf("after toggle the even bits\n");

show(num);
}
int odd_bit_toggle(int num)
{
num = num ^ 0x55555555;

printf("after toggle the odd bits\n");

show(num);
}




