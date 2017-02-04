#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#if 0
//30
char *myitoa(int,char *,int);
int main()
{
int b,n;
printf("enter the number and base value\n");
scanf("%d",&n);
scanf("%d",&b);
char *str = myitoa(n,str,b);
printf("%s\n",str);
}
char *myitoa(int n,char *s,int b)
{
char ch;
int t,i=0,l,j,r=0;
t=n;
if(n==0)
{
s[i++]='0';
s[i++]='\0';
return s;
}
if((n<0)&&(b==10))
n=-n;
while(n)
{
r=n%b;
s[i++]= (r>9)?(r-10)+'a':r+'0';
n=n/b;
}
if(t<0)
s[i++]='-';
s[i]='\0';
l=strlen(s);
for(i=l-1,j=0;j<i;i--,j++)
ch=s[j],s[j]=s[i],s[i]=ch;
return s;
}
#endif
#if 0
//31
int main()
{
char s[90];
int i,l;
printf("enter the string \n");
scanf("%[^$]",s);
l=strlen(s);
for(i=l-1;i>=0;i--)
{
if(s[i]==' '||s[i]=='\n'||s[i]=='\t')
s[i]='\0';
else
break;
}
printf("%s",s);
}
#endif
#if 0
//32
int strindex(char *,char *);
int main()
{
char s[60],t[20];
printf("enter the string s\n");
scanf("%[^\n]",s);
printf("enter second string t\n");
scanf( "%s",t);
int r = strindex(s,t);
if(r!=-1)
printf("string t is present at %d pos of string s\n",r);
else
printf("t is not present in s string\n");
}
int strindex(char *p,char *q)
{
int i,j=0,t=-1;
for(i=0;p[i];i++)
{
if(p[i]==q[0])
for(j=1;q[j];j++)
{
if(p[i+j]!=q[j])
break;
}
if(q[j]=='\0')
{
t=i;
j=0;
}
}
return t;
}
#endif
#if 0
//36
void reverse(char *);
int main()
{
char s[60];
printf("enter the string\n");
scanf("%[^\n]",s);
reverse(s);
printf("after reversing s-%s\ni",s);
}
void reverse(char *p)
{
static int i;
int j=strlen(p)-i;
char ch;
if(i<j)
{
ch = pi[i];
p[i] = p[j-1];
p[j-1] = ch;
i++;
reverse(p);
}
}
#endif
#if 0
//33
double myatof(char *);
int main()
{
char s[60];
printf("enter the string\n");
scanf("%s",s);
double f = myatof(s);
printf("equelent float value f = %f\n",f);
}
double myatof(char *p)
{
int i,j;
double sum=0,d=10;
for(i=0;(p[i]!='.')&&p[i];i++)
sum = sum*10+(p[i]-48);
if(p[i]=='\0')
return sum;
else
{
for(j=i+1;p[j];j++)
{
sum = sum+(p[j]-48)/d;
d=d*10;
}
}
return sum;
}
#endif
#if 0
//37
#define max(a,b) a>b?a:b
int main()
{
int a,b,c;
printf("enter the two numbers\n");
scanf("%d%d",&a,&b);
c = max(a,b);
printf("maximum numbers is %d\n",c);
}
#endif
#if 1
//45
int main(int argc,char *argv[])
{
FILE *fs,*fd;
char c,d;
int count1=0,count2=0;
char line1[100],line2[100];
if(argc!=3)
{
printf("enter the correct arguments\n");
exit(1);
}
fs = fopen(argv[1],"r");
fd = fopen(argv[2],"r");
while((c=fgetc(fs))!=EOF)
{
if(c=='\n')
count1++;
}
rewind(fs);
while(!feof(fs))
{
fgets(line1,sizeof(line1),fs);
fgets(line2,sizeof(line2),fd);
if(strcmp(line1,line2)!=0)
{
printf("not equal line\n");
printf("%s",line1);
break;
}
count2++;
}
if(count1==(count2-1))
printf("two files are equal \n");
fclose(fs);
fclose(fd);
}
#endif
#if 0
//47
void mystrcat(char *,char *);
int main()
{
char s1[60],s2[60];
printf("enter the first string\n");
scanf("%[^\n]",s1);
printf("enter the second string\n");
scanf(" %[^\n]",s2);
mystrcat(s1,s2);
printf("after adding second string %s\n",s1);
}
void mystrcat(char *p,char *q)
{
char *t = p;
while(*p++);
p--;
while(*p++=*q++);
}
#endif
