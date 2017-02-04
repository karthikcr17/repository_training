#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	struct student s[5],temp;
	int i,j;
	for(i=0;i<5;i++)
	scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
	for(i=0;i<5;i++)
		printf("%d %s %f\n",s[i].roll,s[i].name,s[i].marks);
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1-i;j++)
			if(s[j].roll>s[j+1].roll)
			{
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
	}
	printf("print after sorting roll numbers\n");
	for(i=0;i<5;i++)
		printf("%d %s %f\n",s[i].roll,s[i].name,s[i].marks);
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1-i;j++)
			if(strcmp(s[j].name,s[j+1].name)>0)
			{
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
	}
	printf("print after sorting names\n");
	for(i=0;i<5;i++)
		printf("%d %s %f\n",s[i].roll,s[i].name,s[i].marks);
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1-i;j++)
			if(s[j].marks>s[j+1].marks)
			{
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
	}
	printf("print after sorting roll marks\n");
	for(i=0;i<5;i++)
		printf("%d %s %f\n",s[i].roll,s[i].name,s[i].marks);
}
