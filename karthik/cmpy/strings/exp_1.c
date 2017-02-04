#include<stdio.h>
#include<string.h>
//1
#if 0
char *mystrcpy(char *,char *);
int main()
{
char dest[20],src[20];
printf("enter the source string\n");
scanf("%[^\n]",src);
char *p = mystrcpy(dest,src);
printf("dest string %s\n",p);
}
char *mystrcpy(char *p,char *q)
{
int i;
for(i=0;q[i];i++)
p[i]=q[i];
p[i]='\0';
return p;
}
#endif
//2
#if 0
char *mystrncpy(char *,char *,int);
int main()
{
char dest[20],src[20];
int n;
printf("enter the source string\n");
scanf("%[^\n]",src);
printf("enter the no.of characters copying\n");
scanf("%d",&n);
char *p = mystrncpy(dest,src,n);
printf("dest string %s\n",p);
}
char *mystrncpy(char *p,char *q,int n)
{
int i;
for(i=0;q[i]&&(i<n);i++)
p[i]=q[i];
p[i]='\0';
return p;
}
#endif
//3
#if 0
int mystrcmp(char *,char *);
int main()
{
char s[20],d[20];
printf("enter the source string\n");
scanf("%[^\n]",s);
printf("enter dest string\n");
scanf(" %[^\n]",d);
int r = mystrcmp(s,d);
printf("%d\n",r);
}
int mystrcmp(char *p,char *q)
{
int i;
for(i=0;p[i]||q[i];i++)
{
if(p[i]==q[i])
continue;
else if(p[i]<q[i])
return -1;
else
return 1;
}
return 0;
}
#endif
//4
#if 0
int mystrncmp(char *,char *,int);
int main()
{
char s[20],d[20];
int n;
printf("enter the source string\n");
scanf("%[^\n]",s);
printf("enter dest string\n");
scanf(" %[^\n]",d);
printf("enter no.of characters campare\n");
scanf("%d",&n);
int r = mystrncmp(s,d,n);
printf("%d\n",r);
}
int mystrncmp(char *p,char *q,int n)
{
int i;
for(i=0;(p[i]||q[i])&&i<n;i++)
{
if(p[i]==q[i])
continue;
else if(p[i]<q[i])
return -1;
else
return 1;
}
return 0;
}
#endif
#if 0
//5
char *mystrchr(char *,char);
int main()
{
char s[20],ch;
printf("enter the string\n");
scanf("%[^\n]",s);
printf("enter the character\n");
scanf(" %c",&ch);
char *p = mystrchr(s,ch);
if(p!=NULL)
printf("%u\n",p);
else
printf("character not found\n");
}
char *mystrchr(char *p,char ch)
{
int i;
for(i=0;p[i];i++)
if(p[i]==ch)
return p+i;
return 0;
}
#endif
#if 0
//6
int main()
{
char s[30];
int i;
printf("enter the string\n");
scanf("%s",s);
for(i=0;s[i];i++);
printf("length of the string %d\n",i);
}
#endif
#if 0
//7
char *mystrrchr(char *,char);
int main()
{
char s[30],ch;
printf("enter the string\n");
scanf("%[^\n]",s);
printf("enter the character\n");
scanf(" %c",&ch);
char *p = mystrrchr(s,ch);
if(p!=NULL)
printf("%u\n",p);
else
printf("char not found\n");
}
char *mystrrchr(char *p,char ch)
{
int i;
for(i=strlen(p)-1;i>=0;i--)
if(p[i]==ch)
return p+i;
return 0;
}
#endif
#if 0
//8
int mystrspn(char *,char *);
int main()
{
char s[20],d[20];
printf("enter the strings\n"); 
scanf("%s%s",s,d);
int r = mystrspn(s,d);
printf("r=%d\n",r);
}
int mystrspn(char *p,char *q)
{
int i,j,c=0;
for(i=0;p[i];i++)
{
for(j=0;q[j];j++)
{
if(p[i]==q[j])
{
c++;
break;
}
}
if(q[j]=='\0')
break;
}
return c;
}
#endif
#if 0
//9
int mystrcspn(char *,char *);
int main()
{
char s[20],d[20];
printf("enter the strings\n"); 
scanf("%s%s",s,d);
int r = mystrcspn(s,d);
printf("r=%d\n",r);
}
int mystrcspn(char *p,char *q)
{
int i,j,c=0;
for(i=0;p[i];i++)
{
for(j=0;q[j];j++)
{
if(p[i]==q[j])
return c;
}
if(q[j]=='\0')
c++;
}
return c;
}
#endif
#if 1
//10
char *mystrstr(char *,char *);
int main()
{
char s[20],sub[20];
printf("enter the main string\n");
scanf("%s",s);
printf("enter the sub string\n");
scanf( "%s",sub);
char *p = mystrstr(s,sub);
if(p!=0)
{
printf("%u\n",p);
printf("%s\n",p);
}
else
printf("sub string not found\n");
}
char *mystrstr(char *p,char *q)
{
int i,j=0;
for(i=0;p[i];i++)
{
if(p[i]==q[0])
for(j=1;q[j];j++)
{
if(p[i+j]!=q[j])
break;
}
if(q[j]=='\0')
return p+i;
}
return 0;
}
#endif









