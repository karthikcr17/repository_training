#include<stdio.h>
int main()
{
int i=1,j;
for(j=0;j<=31;j++)
{
printf("%d ",i|1);
i=i<<1;
}
printf("\n");
}

