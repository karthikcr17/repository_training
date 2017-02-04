#include<stdio.h>



# if 0
//experiment 1: to set a bit (bitwise Q.1)
main()
{
int num,pos;
printf("enter number and position to set\n");
scanf("%d %d",&num,&pos);
num=num|(1<<pos);
printf("%d\n",num);
}
# endif




# if 0
//experiment 2: to clear a bit (bitwise Q.2)
main()
{
int num,pos;
printf("enter number and position to clear\n");
scanf("%d %d",&num,&pos);
num=num&(~(1<<pos));
printf("%d\n",num);
}
# endif





# if 0
//experiment 3: to compliment a bit (bitwise Q.3)
main()
{
int num,pos;
printf("enter number and position to compliment\n");
scanf("%d %d",&num,&pos);
num=num^(1<<pos);
printf("%d\n",num);
}
# endif





# if 0
//experiment 4: power of 2 or not (bitwise Q.4)
main()
{
int num;
printf("enter the num= \t");
scanf("%d",&num);
(num&(num-1)) ? printf("not power of 2\n") : printf("power of 2\n");
}
#endif





#if 0
//experiment 5: power of 4 r not (Bitwise Q.5)
main()
{
int n,i,j,c=0;
printf("enter the no.= \t");
scanf("%d",&n);
j=n&3;
if(j)
{
printf("not power of 4\n");
return;
}
for(i=3;i<32;i=i+2)
if(n>>i&1)
{
printf("not power of 4\n ");
return;
}
for(i=2;i<32;i=i+2)
if(n>>i&1)
c++;
if(c==1)
printf("power of 4\n");
else
printf("not power of 4\n ");
}
#endif



# if 0
//experiment 6:swapping 1st and last nibble (bitwise Q.6)
#define swap(num) for(i=3,j=s-1;j>=s-4;i--,j--) {\
m=num>>i&1; n=num>>j&1;\
if(m!=n){\
num=num^1<<i; num=num^1<<j;\
}}

main()
{
int s,i,op,j,m,n,num;
char ch;
printf("enter option 1)integer 2)char\n");
scanf("%d",&op);
switch(op)
{
case 1: 
printf("enter number= \t");
scanf("%d",&num);
printf("before swapping..\n");
s=sizeof(num)*8;
for(i=s-1;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
swap(num)
printf("after swapping..\n");
for(i=s-1;i>=0;i--)
printf("%d",num>>i&1);
break;
case 2:
printf("enter character:\n");
scanf(" %c",&ch);
s=sizeof(ch)*8;
printf("before swapping..\n");
for(i=s-1;i>=0;i--)
printf("%d",ch>>i&1);
printf("\n");
swap(ch)
printf("after swapping..\n");
for(i=s-1;i>=0;i--)
printf("%d",ch>>i&1);
break;
}
printf("\n");
}
# endif




# if 0
//experiment 7: finding bit set (bitwise Q.7)
#define set (n>>pos)&1
main()
{
int n,pos;
printf("enter the number and position\n");
scanf("%d %d",&n,&pos);
if(set)
printf("bit is set\n");
else
printf("bit is not set\n");
}
# endif




# if 1
//experiment 8: compliment bits from sourse to dest (bitwise Q.8)
#define comp(num,s,d) for(i=s;i<=d;i++) num=num^1<<i;
main()
{
int i,s,d,num;
printf("enter the number\n");
scanf("%d",&num);
printf("enter source and destination positions:\n");
scanf("%d%d",&s,&d);
printf("number before compliment:\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
comp(num,s,d)
printf("after compliment\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
}
# endif




# if 0
//experiment 9: right rotate & left rotate(bitwise Q.9)
#define ror for(j=1;j<=s;j++){\
                        temp=num&1;temp=temp<<31;num=num>>1;num=num|temp;}
#define lor for(j=1;j<=s;j++){\
                        temp=((num>>31)&1);num=num<<1;num=num|temp;}


int main()
{
unsigned int op,temp,num,s,j;
int i;
printf("enter number= \t");
scanf("%d",&num);
printf("enter no. of shifts=\t");
scanf("%d",&s);
printf("before shifting:\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
printf("enter option 1)right rotate 2)left rotate \n");
scanf("%d",&op);
switch(op)
{
case 1:
        ror
        printf("number after right rotate: %d\n",num);
        break;
case 2:
        lor
        printf("number after right rotate: %d\n",num);
        break;
}
printf("after shifting:\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
}
#endif




#if 1
//experiment 10: increment & decrement(bitwise Q.10)
#define inc(n) for(i=0;i<32;i++){\
                        if(!(n>>i&1)){\
                        n=n|1<<i;break;}\
n=n&~(1<<i);}
#define dec(n)  for(i=0;i<32;i++){\
                        if(n>>i&1){\
                        n=n&~(1<<i);break;}\
                        n=n|1<<i;}
main()
{
int n,i,op;
printf("enter the no.= \t");
scanf("%d",&n);
printf("choose the option 1)inc 2)dec= \t");
scanf("%d",&op);
switch(op)
{
        case 1 :
                inc(n)
                printf("after increment= %d\n",n);
                break;

        case 2 :
                dec(n)
                printf("after decrement= %d\n",n);
                break;
                
        default : printf("invalid option\n");
}

printf("\n");
}
#endif



