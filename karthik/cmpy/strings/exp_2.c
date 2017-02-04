#include<stdio.h>
#include<malloc.h>
#include<string.h>
#if 0
int mystrcspn(char *,char *);
int main()
{
char s[30],sa[30];
printf("enter the string s\n");
scanf("%[^\n]",s);
printf("enter the string accept\n");
scanf(" %s",sa);
int n = mystrcspn(s,sa);
if(n!=strlen(s))
printf("first occerance of the string %d\n",n+1);
else
printf("not found any character\n");
}
int mystrcspn(char *p,char *q)
{
int j,i,temp=strlen(p);
for(i=0;q[i];i++)
{
for(j=0;p[j];j++)
{
if(q[i]==p[j])
{
if(j<=temp)
temp=j;
break;
}
}
}
return temp;
}
#endif
#if 0
int mystrcasecmp(char *,char *);
int main()
{
int i;
char s[20],d[20];
printf("enter the source string\n");
scanf("%[^\n]",s);
printf("enter dest string\n");
scanf(" %[^\n]",d);
int r = mystrcasecmp(s,d);
printf("%d\n",r);
}
int mystrcasecmp(char *p,char *q)
{
int i;
for(i=0;p[i]||q[i];i++)
{
if(p[i]==q[i])
continue;
else 
if(p[i]<q[i])
{
if(p[i]==q[i]-32)
continue;
else
return -1;
}
else
{
if(p[i]-32==q[i])
continue;
else
return 1;
}
}
return 0;
}
#endif
#if 0
//13 
int mystrcasencmp(char *,char *,int);
int main()
{
int i;
char s[20],d[20];
int n;
printf("enter the source string\n");
scanf("%[^\n]",s);
printf("enter dest string\n");
scanf(" %[^\n]",d);
printf("enter the number of characters campare\n");
scanf("%d",&n);
int r = mystrcasencmp(s,d,n);
printf("%d\n",r);
}
int mystrcasencmp(char *p,char *q,int n)
{
int i;
for(i=0;(p[i]||q[i])&&i<n;i++)
{
if(p[i]==q[i])
continue;
else 
if(p[i]<q[i])
{
if(p[i]==q[i]-32)
continue;
else
return -1;
}
else
{
if(p[i]-32==q[i])
continue;
else
return 1;
}
}
return 0;
}
#endif
#if 0
//14
int mystrnlen(char *,int);
int main()
{
char s[60];
int n,r;
printf("enter the string\n");
scanf("%s",s);
printf("enter max length\n");
scanf("%d",&n);
r = mystrnlen(s,n);
printf("%d\n",r);
}
int mystrnlen(char *p,int n)
{
int i;
for(i=0;(p[i]&&i<n);i++);
return i;
}
#endif
#if 0
//16
void mystrcat(char *,char *);
int main()
{
char s1[30],s2[30];
printf("enter the two strings\n");
scanf("%s%s",s1,s2);
mystrcat(s1,s2);
printf("%s\n",s1);
}
void mystrcat(char *p,char *q)
{
int i,j;
for(i=0;p[i];i++);
for(j=0;q[j];j++)
p[i+j]=q[j];
p[i+j]='\0';
}
#endif
#if 0
//17
void mystrncat(char *,char *,int);
int main()
{
char s[30],d[30];
int n;
printf("enter first string\n");
scanf("%s",s);
printf("enter the second string\n");
scanf( "%s",d);
printf("enter the no\n");
scanf("%d",&n);
mystrncat(s,d,n);
printf("%s\n",s);
}
void mystrncat(char *p,char *q,int n)
{
int i,j;
for(i=0;p[i];i++);
for(j=0;(q[j]&&j<n);j++)
p[i+j]=q[j];
p[i+j]='\0';
}
#endif
#if 0
//18
char *mystrcasestr(char *,char *);
int main()
{
char s[30],sub[30];
printf("enter the main string\n");
scanf("%[^\n]",s);
printf("enter the sub string\n");
scanf( "%s",sub);
char *p = mystrcasestr(s,sub);
if(p)
{
printf("%u\n",p);
printf("%s\n",p);
}
else
printf("sub not found\n");
}
char *mystrcasestr(char *p,char *q)
{
int i,j=0;
for(i=0;p[i];i++)
{
if((p[i]==q[0])||(p[i]-32==q[0])||(p[i]+32==q[0]))
{
for(j=1;q[j];j++)
if((p[i+j]==q[j])||(p[i+j]-32==q[j])||(p[i+j]+32==q[j]))
continue;
else 
break;
}
if(q[j]=='\0')
return p+i;
}
return 0;
} 
#endif
#if 0
//19
char *mystrdup(char *);
int main()
{
char s[30];
printf("enter the string\n");
scanf("%s",s);
char *p = mystrdup(s);
printf("%u %s\n",p,p);
}
char *mystrdup(char *p)
{
char *q = malloc(strlen(p)+1);
int i;
for(i=0;p[i];i++)
q[i]=p[i];
q[i]=p[i];
return q;
}
#endif
#if 0
//20
int palin(char *);
int main()
{
char s[30];
printf("enter the string\n");
scanf("%s",s);
int r = palin(s);
if(r==0)
printf("srings is palindrome\n");
else
printf("string is not palindrome\n");
}
int palin(char *p)
{
int i,j;
for(i=0,j=strlen(p)-1;i<j;i++,j--)
{
if(p[i]!=p[j])
return 1;
}
return 0;
}
#endif
#if 0
char *revwords(char *);
char *revstring(char *);
int main()
{
char s[40];
printf("enter the string\n");
scanf("%[^\n]",s);
char *q = revstring(s);
printf("%s\n",q);
char *p = revwords(s);
printf("%s\n",p);
}
char *revstring(char *p)
{
int i,j;
char temp;
for(i=0,j=strlen(p)-1;i<j;i++,j--)
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
}
return p;
}
char *revwords(char *p)
{
char *q = malloc(strlen(p)+1);
int i,t=0,a=0,j,k,m=0,n=0,l=0;
int b=strlen(p);
for(i=0;p[i];i++)
if(p[i]==' ')
n++;
l=b-1;
for(i=0;i<=n;i++)
{
for(j=l,t=0;p[j]!=' '&&j>=0;t++,j--);
l=j-1;
for(k=m,a=j+1;k<t+m;k++,a++)
q[k]=p[a];
q[k++]=' ';
m=t+m+1;
}
q[k]='\0';
return q;
}


#endif
