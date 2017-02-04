#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<malloc.h>

# if 0
//experiment 1 : to check lsb set & msb set (bitwise Q.11)
#define lsbmsbset (num&1) ? printf("least bit set\n") : printf("least bit not set\n");\
(num&(1<<31)) ? printf("highest bit set\n") : printf("highest bit not set\n");

int main()
{
int num;
printf("enter number= \t");
scanf("%d",&num);
lsbmsbset
}
#endif




# if 0
//experiment 2 :to count no. of 1's in a number( bitwise Q.12)
void count_1(int);
int main()
{
int n;
printf("enter the number: \n");
scanf("%d",&n);
count_1(n);
}

void count_1(int n)
{
int c=0;
while(n!=0)
{
if((n&(1<<31))!=0)
c++;
n=n<<1;
}
printf("number of ones-%d\n",c);
}
# endif




#if 0
//experiment 3 : bit pallindrome (bitwise Q.13)
void bit_palindrome(int);
int main()
{
int num,i;
printf("enter the value=\t");
scanf("%x",&num);
printf("number binary format is : \t ");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
bit_palindrome(num);
}

void bit_palindrome(int num)
{
int i,j,m,n;
for(i=31,j=0;i>j;i--,j++)
{
m=num>>i&1;
n=num>>j&1;
if(m!=n)
break;
}
if(j==16)
printf("pallindrome\n");
else
printf("not pallindrome\n");
}
# endif





# if 0
//experiment 4: to count trailing 0's (bitwise Q.14)
void cnt_end_0(int);
int main()
{
int num;
printf("enter number: \n");
scanf("%d",&num);
cnt_end_0(num);
}

void cnt_end_0(int num)
{
int c=0;
while((num&1) == 0)
{
c++;
num=num>>1;
}
printf("count= %d\n",c);
}
#endif




#if 0
//experiment 5 : find greatest of two no.s (bitwise Q.15)
#define great for(i=0;i<32;i++){\
                if(a>>i&1){\
                l=i;c1++;}\
                if(b>>i&1){\
                m=i;c2++;}\
}

#include<stdio.h>
main()
{
int c1=0,c2=0,i,j,a,b,l,m;
printf("enter the no.s...\n");
scanf("%d %d",&a,&b);
great
if(l==m)
if(c1>c2)
printf(" %d is greater\n",a);
else printf( "%d is greater\n",b);
else if(l>m)
printf(" %d is greater\n",a);
else printf(" %d is greater\n",b);
}
#endif




#if 0
//experiment 6: even & odd bis toggle(bitwise Q.17)
#define eando for(i=0,j=1;j<=31;i=i+2,j=j+2){\
m=num>>i&1;n=num>>j&1;if(m!=n){\
num=num^1<<i;num=num^1<<j;}}

int main()
{
int i,j,m,n,num;
printf("enter number= \t");
scanf("%d",&num);
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
eando
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
}
#endif




# if 0
//experiment 7 : toggle all bits(bitwise Q.18)
#define toggle n=n^0xffffffff;
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
toggle
printf("printf after toggle=%x\n",n);
}
# endif



# if 0
//experiment 8: swap 2 numbers (bitwise Q.19)
#define swap x=x^y;y=x^y;x=x^y;
int main()
{
int x,y;
printf("enter the numbers\n");
scanf("%d %d",&x,&y);
printf("before swaping numbers\n");
printf("x=%d\n",x);
printf("y=%d\n",y);
swap
printf("after swaping numbers\n");
printf("x=%d\n",x);
printf("y=%d\n",y);
}
# endif



#if 0
//experiment 9: remove word in a given string   (string program_Q.33)
int removestr(char *,char *);
int main()
{
char s[60],w[20];
printf("enter the string\n");
scanf("%[^\n]",s);
printf("enter the word to remove\n");
scanf(" %s",w);
int r = removestr(s,w);
if(r!=0)
printf("string after removing word is s:   %s\n",s);
else
printf("word is not found\n");
}
int removestr(char *p,char *q)
{
int i,j,l;
char *w=strstr(p,q);
char *t=malloc(strlen(p));
if(w==0)
return 0;
else 
{
l=strlen(q);
for(i=0;i<w-p;i++)
t[i]=p[i];
for(j=0;p[j];j++)
t[i+j]=p[i+j+l];
strcpy(p,t);
}
return 1;
}
#endif


#if 1 
//experiment 10 : insert a word at given position in a string (string program_Q.32)
void insertstr(char *,char *,int);
int main()
{
char s[60],w[20];
int pos;
printf("enter the string\n");
scanf("%[^\n]",s);
printf("enter the word to insert\n");
scanf( "%s",w);
printf("enter the pos to insert\n");
scanf("%d",&pos);
insertstr(s,w,pos);
if(pos>strlen(s))
printf("give the pos less than the string length\n");
else
printf("the new string is s:    %s\n",s);
}
void insertstr(char *p,char *q,int n)
{
int i,j,k;
char *t = malloc(strlen(p)+strlen(q)+1);
strncpy(t,p,n+1);
//for(i=0;i<n&&p[i];i++)
//t[i]=p[i];
for(j=0;q[j];j++)
t[n+j]=q[j];
for(k=0;p[k];k++)
t[n+j+k]=p[n+k];
t[n+j+k]='\0';
strcpy(p,t);
}
#endif

