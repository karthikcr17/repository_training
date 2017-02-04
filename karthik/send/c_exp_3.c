#include<stdio.h>
#include<string.h>
//experiment 1: copies the string from source to destination & returns starting address of destination string   (string program_Q.1)
#if 0
char *my_strcpy(char *,char *);
int main()
{
char dest[50],src[50];
printf("enter the source string\n");
scanf("%[^\n]",src);
char *p = my_strcpy(dest,src);
printf("dest string:  %s\n",p);
}
char *my_strcpy(char *p,char *q)
{
int i;
for(i=0;q[i];i++)
p[i]=q[i];
p[i]='\0';
return p;
}
#endif



//experiment 2: copies the n characters from source to destination & returns starting address of destination string  (string program_Q.2)
#if 0
char *my_strncpy(char *,char *,int);
int main()
{
char dest[50],src[50];
int n;
printf("enter the source string\n");
scanf("%[^\n]",src);
printf("enter the no.of characters copying\n");
scanf("%d",&n);
char *p = my_strncpy(dest,src,n);
printf("dest string:  %s\n",p);
}
char *my_strncpy(char *p,char *q,int n)
{
int i;
for(i=0;q[i]&&(i<n);i++)
p[i]=q[i];
p[i]='\0';
return p;
}
#endif




//experiment 3:compares two strings and return an integer   (string program_Q.3)
#if 0
int my_strcmp(char *,char *);
int main()
{
char s[50],d[50];
printf("enter the source string\n");
scanf("%[^\n]",s);
printf("enter dest string\n");
scanf(" %[^\n]",d);
int r = my_strcmp(s,d);
printf("return integer= %d\n",r);
}
int my_strcmp(char *p,char *q)
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



//experiment 4:compares n characters of source  string with destination string and return an integer  (string program_Q.4)
#if 0
int my_strncmp(char *,char *,int);
int main()
{
char s[50],d[50];
int n;
printf("enter the source string\n");
scanf("%[^\n]",s);
printf("enter dest string\n");
scanf(" %[^\n]",d);
printf("enter no.of characters campare\n");
scanf("%d",&n);
int r = my_strncmp(s,d,n);
printf("%d\n",r);
}
int my_strncmp(char *p,char *q,int n)
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
//experiment 5:returns a pointer to first occurrence of character in a string   (string program_Q.5)
char *my_strchr(char *,char);
int main()
{
char s[50],ch;
printf("enter the string\n");
scanf("%[^\n]",s);
printf("enter the character\n");
scanf(" %c",&ch);
char *p = my_strchr(s,ch);
if(p!=NULL)
{
printf("address of character - %u\n",(unsigned)p);
printf("p= %s\n",p);
}
else
printf("character not found\n");
}
char *my_strchr(char *p,char ch)
{
int i;
for(i=0;p[i];i++)
{
if(p[i]==ch)
return p+i;
}
return 0;
}
#endif



#if 0
//experiment 6:calculates length of string excluding null byte  (string program_Q.6)
int main()
{
char s[50];
int i;
printf("enter the string\n");
scanf("%s",s);
for(i=0;s[i];i++);
printf("length of the string %d\n",i);
}
#endif



#if 0
//experiment 7: returns a pointer of last occurrence of a character in a string  (string program_Q.7)
char *my_strrchr(char *,char);
int main()
{
char s[50],ch;
printf("enter the string\n");
scanf("%[^\n]",s);
printf("enter the character\n");
scanf(" %c",&ch);
char *p = my_strrchr(s,ch);
if(p!=NULL)
{
printf("address of character:%u\n",p);
printf("p: %s",(unsigned)p);
}
else
printf("char not found\n");
}
char *my_strrchr(char *p,char ch)
{
int i;
for(i=strlen(p)-1;i>=0;i--)
if(p[i]==ch)
return p+i;
return 0;
}
#endif



#if 0
//experiment 8:calculates length of initial segment of s which consists of entire characters in accept  (string program_Q.8)
int my_strspn(char *,char *);
int main()
{
char s[50],d[50];
printf("enter the strings\n"); 
scanf("%[^\n]  %[^\n]",s,d);
int r = my_strspn(s,d);
printf("length of initial segment in accept= %d\n",r);
}
int my_strspn(char *p,char *q)
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
//experiment 9: calculates length of initial segment of s which contains characters not in reject  (string program_Q.9)
int my_strcspn(char *,char *);
int main()
{
char s[50],d[50];
printf("enter the strings\n"); 
scanf("%[^\n] %[^\n]",s,d);
int r = my_strcspn(s,d);
printf("length of segment entire characters in reject= %d\n",r);
}
int my_strcspn(char *p,char *q)
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
//experiment 10: first occurance of substring in main string  (string program_Q.10)
char *my_strstr(char *,char *);
int main()
{
char s[20],sub[20];
printf("enter the main string\n");
scanf("%s",s);
printf("enter the sub string\n");
scanf( "%s",sub);
char *p = my_strstr(s,sub);
if(p!=0)
{
printf("first occurence address: %u\n",p);
printf("string p: %s\n",p);
}
else
printf("sub string not found\n");
}
char *my_strstr(char *p,char *q)
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









