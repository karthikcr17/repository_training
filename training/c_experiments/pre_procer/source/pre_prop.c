#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MALLOC(str) if((str =(char *) malloc(sizeof(char) * 200)) == NULL){\
						printf("malloc is failed \n");\
						exit(1);	\
						}
					
void include(FILE *, char *);

int main(int argc,char **argv)
{
	int i,j,k,l,n;
	int M = 0;
	int N = 0;
	int x = 0;
	int count = 0;

	char buff1[10] = "hello";
	

	char *s = NULL;
	char *d = NULL;
	char *p = NULL;
	char *buff = NULL;

	char *macro[10];
	char *replace[10];
	char *file = NULL;
	char delim[5];
	FILE *fp,*fd;
	
	for(i = 0; i < 10; i++) {
		MALLOC(macro[i])	
		MALLOC(replace[i])
	}	
	

	if(argc!=2)
	{
	printf("USAGE:./a.out filename.c\n");
	return 0;
	}

	MALLOC(s)
	MALLOC(d)
	MALLOC(buff)

	if((file = (char *)malloc(15)) == NULL) {
		printf("malloc is failed\n");
		exit(1);
	}

	if((fp=fopen(argv[1],"r"))==0)
	{
		printf("file doesnt exist..\n");
		return 0;
	}

	delim[0] = '.';

	file = strtok(argv[1], delim);
	strcat(file,".i");

	fd=fopen(file,"w");
	while(fgets(s,200,fp)!=NULL)
	{
		if(strncmp(s, "#include", 8) == 0)       //placing header files  < > or " "
		{
		 include(fd, s);
		 continue;
		}
		else if(strncmp(s, "#define", 7) == 0)       //getting macros to separate strings
		{

			for(i=0;s[i]!='\n';i++)
			{
				if(s[i]==' ')
				{

					for(j=i+1,k=0;s[j]!=' ';j++,k++)
						buff[k] = s[j];
					buff[k]='\0';
					strcpy(macro[M++],buff);
					for(l=j+1,n=0;s[l]!='\n';l++,n++)
						buff[n]=s[l];
					buff[n]='\0';
					strcpy(replace[N++], buff);
					count++;
					break;
				}
			}
			fputc('\n',fd);
			continue;
		}	
		else if(s[0]=='/'&&s[1]=='/')        //comments in single line
			continue;
		else if(s[0]=='/'&&s[1]=='*')        //comments of multilple lines
		{
			do{
				char c[3]="*/";
				if(strstr(s,c))
					break;
			}while(fgets(s,200,fp)!=NULL);

			continue;
		}
		if(count > 0) {
			for(x = 0; x <= M; x++) {	
				int l1 = strlen(replace[x]);
				int l = strlen(macro[x]);

				if((p = strstr(s, macro[x])) != NULL) //replacing the macros
				{
					if(*(p + l) >= 'a' && *(p + l) <= 'z')
						continue;
					else if(*(p + l) >= 'A' && *(p + l) <= 'Z')
						continue;
					else if(*(p + l) >= '0' && *(p + l) <= '9')
						continue;
					else {
						for(i=0,j=0;p!=s+i;i++,j++)
							d[j]=s[i];
						strcat(d, replace[x]);
						for(i=i+l;s[i];i++,j++)
							d[j + l1]=s[i];
						d[j + l1]='\0';
						strcpy(s,d);
						memset(d, '\0', strlen(d));
						break;
					}
				}
			}
		}
		for(i=0;s[i];i++)    //deleting comments within the lines   
		{
			if(s[i]=='/'&&s[i+1]=='/')
			{
				fputc('\n',fd);
				break;}
			else if(s[i]=='/'&&s[i+1]=='*')
			{
				for(j=i+2;s[j]!='*'||s[j+1]!='/';j++)
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
	free(s);
	free(d);
	free(buff);
	for(i = 0; i < M; i++) {
		free(macro[i]);
		free(replace[i]);
	}

	return 0;
}





