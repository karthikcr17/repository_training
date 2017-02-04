#include<stdio.h>
#include<string.h>
#if 0
//experiment 1: counting number of words(starting program_Q.11)
int main(int argc,char *argv[])
{
	FILE *fp;
	char s[30];
	int c=0;
	if(argc!=2)
	{
		printf("wrong commands\n");
		return 0;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is empty\n");
		return 0;
	}
	while(fscanf(fp,"%s",s)!=EOF)
		c++;
	printf("count = %d\n",c);
}
#endif

#if 0 
//experiment 2:printing one word per line(starting program_Q.12)
int main(int argc,char *argv[])
{
	FILE *fp;
	char s[30];
	//char ch;
	if(argc!=2)
	{
		printf("wrong commands\n");
		return 0;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is empty\n");
		return 0;
	}
	while(fscanf(fp,"%s",s)!=EOF)
	{
		printf("%s\n",s);
	}
	printf("\n");
}

#endif

#if 0
//experiment 3: no. of occurances of digits & white spaces in a array(starting program_Q.13)
int main(int argc,char *argv[])
{
	FILE *fp;
	int b=0,i,j;
	char ch[100];
	printf("enter array:\n");
	scanf("%[^\n]",ch);
	static int a[10];
	for(j=0;ch[j];j++)
	{
		if(ch[j]==' ')
			b++;
		else
			for(i=48;i<=57;i++)
				if(ch[j]==i)
				{
					a[i-48]++;
					break;
				}
	}
	printf("white spaces= %d\n",b);
	for(i=0;i<10;i++)
		printf("no. of %d's: %d\n",i,a[i]);
}

#endif

#if 0
//experiment 4: printing the lines having greater thn 80 characters in a file(starting program_Q.14)
int main(int argc,char *argv[])
{
	FILE *fp;
	int c=0;
	char s[200];
	if(argc!=2)
	{
		printf("wrong commands\n");
		return 0;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is empty\n");
		return 0;
	}
	while(fgets(s,200,fp))
		if(strlen(s) > 80)
			printf("%s\n",s);

}
#endif

#if 0
//experiment 5:removing blanks, tabs &empty lines (starting program_Q.15)

int main(int argc,char *argv[])
{
	FILE *fp1, *fp2;
	static int c=0,n=0,t=0;
	char s[200],ch;
	if(argc!=3)
	{
		printf("wrong commands\n");
		return 0;
	}
	fp1=fopen(argv[1],"r");
	if(fp1==0)
	{
		printf("file is empty\n");
		return 0;
	}

	fp2=fopen(argv[2],"w");
	while((ch=fgetc(fp1))!=EOF)
	{
		if((ch!=' ')&&(ch!='\n')&&(ch!='\t'))
		{
			fputc(ch,fp2);
			c=0;
			t=0;
			n=0;
		}
		else if((ch=='\t')&&(t==0))
		{
			fputc(' ',fp2);
			t++;
		}
		else
			if((c==0)&&(n==0)&&(t==0))
			{
				fputc(ch,fp2);
				if(ch==' ')
					c++;
				if(ch=='\n')
					n++;

			}
	}

	fclose(fp1);
	fclose(fp2);

}
#endif	

#if 0
//experiment 6: reversing the charecters of a string & use it in a program  (starting program_Q.16)

char *reverse(char *p)
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

int main(int argc,char *argv[])
{
	FILE *fp;
	int c=0;
	char s[200];
	if(argc!=2)
	{
		printf("wrong commands\n");
		return 0;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is empty\n");
		return 0;
	}
	while(fgets(s,200,fp))
	{
	char *r=reverse(s);
	printf("%s",r);
	}
}
#endif


#if 0
//experiment 7: program for detab that replaces tab with proper spaces  (starting program_Q.17)

int main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	int i;
	char ch;
	if(argc!=3)
	{
		printf("wrong commands\n");
		return 0;
	}
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	if(fp1==0)
	{
		printf("file is empty\n");
		return 0;
	}
	while((ch=fgetc(fp1))!=EOF)
	{
	if(ch!='\t')
	fputc(ch,fp2);
	else
	for(i=0;i<4;i++)
	fputc(' ',fp2);
	}
}
#endif



#if 0
//experiment 8: remove comments(starting program_Q.20)

int main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	int i,j;
	char ch;
	char s[200];
	if(argc!=3)
	{
		printf("wrong commands\n");
		return 0;
	}
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	if(fp1==0)
	{
		printf("file is empty\n");
		return 0;
	}
	while((fgets(s,200,fp1))!=NULL)
	{
	if(s[0]=='/'&&s[1]=='/')        //comments in single line
                        continue;
                else if(s[0]=='/'&&s[1]=='*'&&(!strstr(s,"*/")))        //comments of multilple lines
                {
                        while(fgets(s,200,fp1)!=NULL)
                        {
                                char c[]="*/";
                                if(strstr(s,c))
                                        break;
                                else
                                        continue;
                        }

                        continue;
                }
	else if(strstr(s,"//")||strstr(s,"/*"))
	for(i=0;s[i];i++)
	{
	if(s[i]=='/'&&s[i+1]=='/')        //comments in single line
	{
	fputc('\n',fp2);
	break;
	}
	else if(s[i]=='/'&&s[i+1]=='*')
	{
	for(j=i+2;s[j]!='*'&&s[j+1]!='/';j++);
	i=j+1;
	continue;
	}
	else
	fputc(s[i],fp2);
	}
	else
	fputs(s,fp2);
	}
}
#endif



#if 0
//experiment 9: whether a year is leap year or not  (starting program_Q.23)
int main()
{
int year;
printf("enter year: \t");
scanf("%d",&year);
if(year%4==0 && year%100!=0 || year%400==0)
printf("leap year\n");
else
printf("not a leap year\n");
}
#endif


#if 1
//experiment 10: implementation of atoi function  (starting program_Q.24)
int myatoi(char *);
int main()
{
char s[30];
printf("enter the string\n");
scanf("%s",s);
int n = myatoi(s);
printf("the equelent integer n- %d\n",n);
}
int myatoi(char *p)
{
int sum=0,j,i;
for(i=0;p[i]!='\0';i++)
{
j = p[i]-48;
sum = sum*10+j;
}
return sum;
}
#endif

