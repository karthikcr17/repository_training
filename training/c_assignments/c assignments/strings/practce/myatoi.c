#include<stdio.h>
#include<malloc.h>

int myatoi(char a[]);
int main()
{

	char *str;
	str = (char *)malloc(20);

	
	int i;
	int num = 10;


	printf("enter the the string \n ");
	fgets(str,10,stdin);

	num = myatoi(str);

	printf("after converting atoi the number is: \n");
	printf("%d\n",num);

	return 0;
}

int myatoi(char a[])
{

	int i;
	int num = 0;

	if(a[0] == '-') {  /*for you have to given negative numbers
                      it calculates the  calculates it return negative integer*/

		for(i = 1; a[i] != '\n'; i++) {
			if(a[i] >= '0' && a[i] <= '9')
				num = num * 10  + (a[i] - '0');
			else
				return 0;
		} 
		return num * -1;
	}		

	else if(a[0] == '+') {	/*for you have to given positive number with + operator it 
						 returns that positive integer value*/
		for(i = 1; a[i] != '\n'; i++) {
			if(a[i] >= '0' && a[i] <= '9')
				num = num * 10  + (a[i] - '0');
			else
				return 0;
		} 
		return num * 1;
	}

	else {	/*for you have to given positive number without + operator it 
								  returns that positive integer value */
		for(i = 0; a[i] != '\n'; i++) {
			if(a[i] >= '0' && a[i] <= '9')
				num = num * 10  + (a[i] - '0');
			else
				return 0;
		} 
		return num * 1;		
	}
}						

