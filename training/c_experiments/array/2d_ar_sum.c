#include<stdio.h>

int main()
{

	int column;
	int row;

	printf("enter the columns you want\n");
	scanf("%d",&column);

	printf("enter the rows you want \n");
	scanf("%d",&row);

	int a[column][row];
	int b[column][row];
	int c[column][row];

	int i, j;
	
	printf("enter the array a \n");
	
	for(i = 0; i < row; i++) {
				for(j = 0; j < column ; j++)
					scanf("%d",&a[i][j]);
	}	
	
	printf("enter the array b \n");
	
	for(i = 0; i < row; i++) {
				for(j = 0; j < column; j++)
					scanf("%d",&b[i][j]);
	}
	for(i = 0; i < row; i++) {
				for(j = 0; j < column; j++)
						c[i][j] = a[i][j] + b[i][j];
	}
						
	printf("enter the array c \n");
	
	for(i = 0; i < row; i++) {
				for(j = 0; j < column; j++) 
					printf("%d ",c[i][j]);
		printf("\n");
	}

	return 0;
}






