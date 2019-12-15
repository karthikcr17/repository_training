#include <stdio.h>

void showbits (long long int num)                                                         
{                                                                               
    int i;                                                                      
//	int *p = (int *) (&num);                                                                                
	
//	printf ("%f\n", num);
	for (i = (sizeof (long long int)* 8 - 1 ); i >= 0; i--) {
		printf("%lld",((num >> i) & 1U));
		if (i % 4 == 0) {
			printf (" ");
		}
    }                                                                          
                                                                                }          
