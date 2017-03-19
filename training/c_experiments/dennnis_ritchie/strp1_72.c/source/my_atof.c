#include "header.h"

double my_atof(char *s)
{
	double val = 0;
	int i = 0;
	int k = 0;
	int	power = 1;
	int num = 0;
	int j = 0;
	int flag = 1;

	while(*(s + i) == ' ')
		i++;

	if(*(s + i) == '-'){
		flag = 0;
		i++;
	}

	for(j = i; s[j] != '\0'; j++) {
		for(;(s[j] != '\0') && (s[j] != '.') && (s[j] != 'e')
									&& (s[j] != 'E'); j++) {
			if(s[j] >= '0' && s[j] <= '9')
				val = val * 10 + (s[j] - '0');
			else
				return -1;
		}
		if(s[j] == '.') {
			j++;
			for(k = 1; (s[j] != '\0') && (s[j] !=  'e') 
					&& (s[j] != 'E'); j++,k++){ 
				if(s[j] >= '0' && s[j] <= '9') {
					power = power * 10;
					val = val + ((s[j] - '0') / (double)power);
				}
				else
					return -1;
			}
		}
		if(s[j] == 'e' || s[j] == 'E'){
			j++; 
			if(s[j] == '-') {
				j++;
				for(; s[j]; j++){
					if(s[j] >= '0' && s[j] <= '9')
						num = num * 10 + (s[j] - '0');
					else
						return -1;
				}
				for(k = 0; k < num; k++)
					val = val * 0.1;
			}
			else {
				j++;
				if(s[j] == '+')
					j++;
				for(; s[j]; j++) {
					if(s[j] >= '0' && s[j] <= '9')
						num = num * 10 + (s[j] - '0');
					else 
						return -1;
				}
				for(k = 0; k < num; k++)
					val = val * 10;
			}
		}
		else if (s[j] != '\0') {
			return -1;
		}
	}


	val = (flag == 1) ? val * 1 : val * -1;
	return val;
}

