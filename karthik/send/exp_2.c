#include<stdio.h>
#include<malloc.h>
#include<string.h>

//experiment 1:locates first occurrence of string s of any characters in string accept (string program_Q.11)
#if 0
int my_strcspn(char *,char *);
int main()
{
char s[30],sa[30];
printf("enter the string s\n");
scanf("%[^\n]",s);
printf("enter the string accept\n");
scanf(" %s",sa);
int n = my_strcspn(s,sa);
if(n!=strlen(s))
printf("first occerance of the string %d\n",n+1);
else
printf("not found any character\n");
}
int my_strcspn(char *p,char *q)
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


//experiment 2: compares 2 strings by ignoring the case of characters  (string program_Q.12)
#if 0
int my_strcasecmp(char *,char *);
int main()
{
int i;
char s[20],d[20];
printf("enter the source string\n");
scanf("%[^\n]",s);
printf("enter dest string\n");
scanf(" %[^\n]",d);
int r = my_strcasecmp(s,d);
printf("r= %d\n",r);
}
int my_strcasecmp(char *p,char *q)
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



//experiment 3:compares n charecters of s1 with s2 by ignoring the case of charecters  (string program_Q.13)
#if 0
int my_strcasencmp(char *,char *,int);
int main()
{
int i;
char s1[20],s2[20];
int n;
printf("enter the source string\n");
scanf("%[^\n]",s1);
printf("enter dest string\n");
scanf(" %[^\n]",s2);
printf("enter the number of characters campare\n");
scanf("%d",&n);
int r = my_strcasencmp(s1,s2,n);
printf("%d\n",r);
}
int my_strcasencmp(char *p,char *q,int n)
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
//experiment 4:number of characters pointed by string s excluding null byte within n number of characters  (string program_Q.14)
int my_strnlen(char *,int);
int main()
{
char s[60];
int n,r;
printf("enter the string\n");
scanf("%s",s);
printf("enter max length\n");
scanf("%d",&n);
r = my_strnlen(s,n);
printf("%d\n",r);
}
int my_strnlen(char *p,int n)
{
int i=0;
while(p[i]&&i<n)
i++;
return i;
}
#endif



#if 0
//experiment 5:appends source string to destination string  (string program_Q.16)
void my_strcat(char *,char *);
int main()
{
char s1[30],s2[30];
printf("enter the two strings\n");
scanf("%s%s",s1,s2);
my_strcat(s1,s2);
printf("%s\n",s1);
}
void my_strcat(char *p,char *q)
{
int i,j;
for(i=0;p[i];i++);
for(j=0;q[j];j++)
p[i+j]=q[j];
p[i+j]='\0';
}
#endif




#if 0
//experiment 6:appends n charecters of source string to destination string  (string program_Q.17)
void my_strncat(char *,char *,int);
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
my_strncat(s,d,n);
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
//experiment 7: first occurrence of substring ignoring the case of charecters  (string program_Q.18)
char *my_strcasestr(char *,char *);
int main()
{
char s[30],sub[30];
printf("enter the main string\n");
scanf("%[^\n]",s);
printf("enter the sub string\n");
scanf( "%s",sub);
char *p = my_strcasestr(s,sub);
if(p)
{
printf("first occurrence sub-string address: %u\n",p);
printf("p: %s\n",p);
}
else
printf("sub not found\n");
}
char *my_strcasestr(char *p,char *q)
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
//eperiment 8:returns starting address of the duplicate string (string program_Q.19)
char *my_strdup(char *);
int main()
{
char s[30];
printf("enter the string\n");
scanf("%s",s);
char *p = my_strdup(s);
printf("%u %s\n",p,p);
}
char *my_strdup(char *p)
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
//experiment 9:string pallimdrome  (string program_Q.20)
int palindrome(char *);
int main()
{
char s[30];
printf("enter the string\n");
scanf("%s",s);
int r = palindrome(s);
if(r==0)
printf("srings is palindrome\n");
else
printf("string is not palindrome\n");
}
int palindrome(char *p)
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



#if 1
//experiment 10:reverse the string & reverse the words of string  (string program_Q.21)
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
