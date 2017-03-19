#include<stdio.h>

extern int valid(char a[])

{
	int i;
	int s;
	int num = 0;

	if(a[0] == '-') {                                         /*for you have to given negative numbers it calculates the 
								    calculates it return negative integer */

		for(i = 1; a[i]; i++) {
			if(a[i] >= '0' && a[i] <= '9')
				num = num * 10  + (a[i] - '0');
			else if(a[i] == '.')
				break;
			else
				return 0;
		} 
		return num * -1;
	}		

	else if(a[0] == '+') {					/*for you have to given positive number with + operator it 
								  returns that positive integer value*/
		for(i = 1; a[i]; i++) {
			if(a[i] >= '0' && a[i] <= '9')
				num = num * 10  + (a[i] - '0');
			else if(a[i] == '.')
				break;
			else
				return 0;
		} 
		return num * 1;
	}

	else {							/*for you have to given positive number without + operator it 
								  returns that positive integer value */
		for(i = 0; a[i]; i++) {
			if(a[i] >= '0' && a[i] <= '9')
				num = num * 10  + (a[i] - '0');
			else if(a[i] == '.')
				break;
			else
				return 0;
		} 
		return num * 1;		
	}
}						



