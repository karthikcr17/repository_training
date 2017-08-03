
/* program on implement quick sort */

#include "header.h"

int main()
{

	int arr[MAX]; /* stores array of MAX integer elements */
	int i = 0;
	char buff[MAX]; 
	int l = 0;
	int r = MAX - 1;

	printf("enter the elements \n");
	for(i = 0; i < MAX; i++) {

		printf("arr[%d] = ",i);
		if((fgets(buff, MAX, stdin)) == NULL) {
			perror("fgets is failled \n");
			exit(0);
		}

		*(buff + strlen(buff) - 1) = '\0';

		arr[i] = atoi(buff);
		printf("\n");
	}
	quick_sort(arr, l, r);

	printf("after sorting the elements \n");

	for(i = 0; i < MAX; i++) 
		printf("arr[%d] = %d \n",i,arr[i]); 


	return 0;
}

