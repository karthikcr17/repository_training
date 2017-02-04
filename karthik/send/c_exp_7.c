#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#if 0
//experiment 1: implementation of memcpy libraryfunction (string program_Q.26(i))
void *mymemcpy(void *,void *,int);
int main()
{
int i,m=0,num;
printf("enter the number and no.of bytes to copy\n");
scanf("%d%d",&i,&num);
mymemcpy(&m,&i,num);
printf("%d\n",m);
}
void *mymemcpy(void *p,void *q,int n)
{
int i;
char *w=p;
char *x=q;
for(i=0;i<n;i++)
w[i]=x[i];
return w;
}
#endif



#if 0
//experiment 2: implementation of memcmp library function (string program_Q.26(ii))
int mymemcmp(void *,void *,int);
int main()
{
int n,m,num;
printf("enter two numbers\n");
scanf("%d%d",&m,&n);
printf("enter no.of bytes campare\n");
scanf("%d",&num);
int r = mymemcmp(&m,&n,num);
printf("%d\n",r);
}
int mymemcmp(void *p,void *q,int n)
{
char *w=p;
char *x=q;
int i,j;
for(i=0;i<n;i++)
{
if(w[i]!=x[i])
return (w[i]-x[i])<<8*i;
}
return 0;
}
#endif




#if 0
//experiment 3: implementation of memset library function (string program_Q.26(iii))
void *mymemset(void *,int,int);
int main()
{
int s,c,num;
printf("enter the number and set number\n");
scanf("%d%d",&s,&c);
printf("enter the no.of bytes\n");
scanf("%d",&num);
mymemset(&s,c,num);
printf("s-%d\n",s);
}
void *mymemset(void *p,int c,int n)
{
char *x=p;
int i;
for(i=0;i<n;i++)
x[i]=c;
}
#endif 




#if 0
//experiment 4: implementation of memmove library function (string program_Q.26(iv))
void *mymemmove(void *,void *,int);
int main()
{
int s,d=0,num;
printf("enter the src value\n");
scanf("%d",&s);
printf("enter the number of bytes moved\n");
scanf("%d",&num);
mymemmove(&d,&s,num);
printf("d-%d\n",d);
}
void *mymemmove(void *p,void *q,int n)
{
char *w=p;
char *x=q;
char *t=malloc(n);
int i;
for(i=0;i<n;i++)
t[i]=x[i];
for(i=0;i<n;i++)
w[i]=t[i];
}
#endif


#if 0
//experiment 5: replacing the word in a string with other word(string program_Q.28)
int replcwrd(char *,char *,char *);
int main()
{
char s[60],w1[20],w2[20];
printf("enter the string\n");
scanf("%[^\n]",s);
printf("enter the word and replacement word\n");
scanf( "%s%s",w1,w2);
int m=replcwrd(s,w1,w2);
if(m==0)
{
printf("word is not found\n");
}
else printf("modified string:    %s\n",s);
}
int replcwrd(char *p,char *q,char *r)
{
int z,i,j=0,k,l=strlen(q),m=0;
char w[80];
for(z=0;p[z];z++)
{
char *a=strstr(p,q);
if(a)
{
for(i=0,k=0;a!=k+p;k++,i++)
w[i]=p[k];
for(j=0;r[j];j++,i++)
w[i]=r[j];
for(k=k+l;p[k];k++,i++)
w[i]=p[k];
w[i]='\0';
strcpy(p,w);
m++;
}
}
return m;
}
#endif




#if 0
//experiment 6: to convert upper case to lower case & vice versa   (string program_Q.30)
void ltou_utol(char *);
int main()
{
char s[30];
printf("enter the word\n");
scanf("%s",s);
ltou_utol(s);
printf("%s\n",s);
}
void ltou_utol(char *p)
{
int i;
for(i=0;p[i];i++)
{
if((97<=p[i])&&(p[i]<=122))
p[i]=p[i]-32;
else if((65<=p[i])&&(p[i]<=90))
p[i]=p[i]+32;
}
}
#endif




#if 0
//experiment 7: to find occurrence of word in given string  (string program_Q.31)
int wrdoccrans(char *,char *);
int main()
{
char s[100],w[20];
printf("enter the string\n");
scanf("%[^\n]",s);
printf("enter the word\n");
scanf( "%s",w);
int n = wrdoccrans(s,w);
if(n!=0)
printf("word occured %d times in string\n",n);
else
printf("word is not found\n");
}
int wrdoccrans(char *p,char *q)
{
int i,j,c=0;
for(i=0;p[i];i++)
{
if(p[i]==q[0])
for(j=1;q[j];j++)
{
if(p[i+j]!=q[j])
break;
else if(j==strlen(q)-1)
c++;
}
}
return c;
}
#endif





#if 0
//experiment 8: to implement function setbits(x,p,n,y)  (starting program_Q.25)
int setbits(int,int,int,int);
int main()
{
int r,x,p,n,y,i;
printf("enter the number(y) :\n");
scanf("%d",&y);
printf("enter the position(p) & no. of bits to set(n):\n");
scanf("%d%d",&p,&n);
x= setbits(x,p,n,y);
printf("before setting the bits y=  \n");
for(i=31;i>=0;i--)
printf("%d",y>>i&1);
printf("\n");
printf("after setting the bits x=  \n");
for(i=31;i>=0;i--)
printf("%d",x>>i&1);
printf("\n");
printf("after setting x value is x: %d\n",x);
}
int setbits(int x, int p,int n,int y)
{
int i;
x=y;
for(i=p;i>p-n;i--)
x=x|(1<<i);

return x;
}

#endif



#if 0
//experiment 9:to implement function invert(x,p,n)   (starting program_Q.26)

int invert(int,int,int);
int main()
{
int x,p,n,i;
printf("enter the number(x) :\n");
scanf("%d",&x);
printf("enter the position(p) & no. of bits to invert (n):\n");
scanf("%d%d",&p,&n);
printf("before inverting the bits x=  \n");
for(i=31;i>=0;i--)
printf("%d",x>>i&1);
printf("\n");
x= invert(x,p,n);
printf("after inverting  the bits x=  \n");
for(i=31;i>=0;i--)
printf("%d",x>>i&1);
printf("\n");
printf("after inverting x value is x: %d\n",x);
}
int invert(int x, int p,int n)
{
int i;
for(i=p;i>p-n;i--)
x=x^(1<<i);

return x;
}

#endif




#if 1
//experiment 10 : function rightrot(x,n)  (starting program_Q.27)
int rightrot(unsigned int,int);

int main()
{
unsigned int x,n;
int i;
printf("enter number= \t");
scanf("%d",&x);
printf("enter no. of shifts=\t");
scanf("%d",&n);
printf("before rotating:\n");
for(i=31;i>=0;i--)
printf("%d",x>>i&1);
printf("\n");
x=rightrot(x,n);
printf("after right rotate:\n");
for(i=31;i>=0;i--)
printf("%d",x>>i&1);
printf("\n");
printf("after rotation x value is:  %d\n",x);
}
int rightrot(unsigned int num,int s)
{
int j,temp;
//num=(unsigned int) num;
for(j=1;j<=s;j++)
{
temp=num&1;
temp=temp<<31;
num=num>>1;
num=num|temp;
}
return num;
}

#endif

