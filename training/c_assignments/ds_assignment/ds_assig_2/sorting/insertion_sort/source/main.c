
/* program on implement selection sort */

#include "header.h"

int main()
{

	int arr[MAX]; /* stores array of MAX integer elements */
	int i = 0;
	char buff[MAX]; 

	printf("enter the elements \n");
	for(i = 0; i < MAX; i++) {
		
		printf("arr[%d] = ",i);
		if((fgets(buff, MAX, stdin)) == NULL) {
			printf("fgets is failled \n");
			exit(1);
			}
		
		*(buff + strlen(buff) - 1) = '\0';

		arr[i] = atoi(buff);
		printf("\n");
	}

	insertion_sort(arr);

	printf("after sorting the elements \n");

	for(i = 0; i < MAX; i++) 
		printf("arr[%d] = %d \n",i,arr[i]); 
	

	return 0;
}

