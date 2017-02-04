#include<stdio.h>
#include<string.h>
main()
{
char s[100];
printf("enter string\n");
scanf("%[^\n]",s);
int i,c;
for(i=0;s[i];i++)
if (s[i]!=' ')
{
c=0;
printf("%c",s[i]);
}
else
if(c==0)
{
printf("%c",s[i]);
c++;
}
printf("\n");
}
