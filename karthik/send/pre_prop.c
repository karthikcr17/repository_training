#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char **argv)
{
	int i,j,k,l,n;
	char s[200],d[200],mn[20],mb[20],*p;
	FILE *fp,*fd;
	if(argc!=3)
	{
	printf("USAGE:./a.out filename.c filename.i \n");
	return;
	}
	if((fp=fopen(argv[1],"r"))==0)
	{
		printf("file doesnt exist..\n");
		return 0;
	}
	fd=fopen(argv[2],"w");
	while(fgets(s,200,fp)!=NULL)
	{
		if(s[0]=='#'&&s[1]=='i')            //placing header files  < > or " "
		{
			for(i=2;s[i];i++)
			{
				if(s[i]=='<'||s[i]=='"')
				{
					for(j=i+1;s[j]!='>'&&s[j]!='"';j++)
						fputc(s[j],fd);
					fputc('\n',fd);
					break;
				}
			}
			continue;
		}
		else if(s[0]=='#'&&s[1]=='d')       //getting macros to separate strings
		{

			for(i=0;s[i]!='\n';i++)
			{
				if(s[i]==' ')
				{

					for(j=i+1,k=0;s[j]!=' ';j++,k++)
						mn[k]=s[j];
					mn[k]='\0';
					for(l=j+1,n=0;s[l]!='\n';l++,n++)
						mb[n]=s[l];
					mb[n]='\0';
					break;
				}
			}
			fputs(s,fd);
			continue;
		}	
		else if(s[0]=='/'&&s[1]=='/')        //comments in single line
			continue;
		else if(s[0]=='/'&&s[1]=='*')        //comments of multilple lines
		{
			while(fgets(s,200,fp)!=NULL)
			{
				char c[3]="*/";
				if(strstr(s,c))
					break;
				else
					continue;
			}

			continue;
		}
		else if((p=strstr(s,mn))!=NULL)      //replacing the macros
		{
			for(i=0,j=0;p!=s+i;i++,j++)
				d[j]=s[i];
			for(k=0;mb[k];k++,j++)
				d[j]=mb[k];
			int l=strlen(mn);
			for(i=i+l;s[i];i++,j++)
				d[j]=s[i];
			d[j]='\0';
			strcpy(s,d);
		}
		for(i=0;s[i];i++)                      //deleting comments within the lines   
		{
			if(s[i]=='/'&&s[i+1]=='/')
			{
				fputc('\n',fd);
				break;}
			else if(s[i]=='/'&&s[i+1]=='*')
			{
				for(j=i+2;s[j]!='*'&&s[j+1]!='/';j++)
				{
					if(s[j]=='\0')
					{
						fgets(s,200,fp);
						j=0;
						continue;
					}
				}
				fputc('\n',fd);
				break;
			}
			else
				fputc(s[i],fd);
		}

	}
return 0;
}





