/* linear search using arrays */

#include "header.h"

int main()
{

	int arr[MAX];
	int key;
	int i = 0;
	char buff[MAX];
	int pos;

	printf("enter the elements \n");

	for(i = 0; i < MAX; i++) {

		printf("a[%d] =",i);

		if((fgets(buff, MAX, stdin)) == NULL) {
			printf("fgets is failed \n");
			exit(1);
		}

	*(buff + strlen(buff) - 1) = '\0';
	arr[i] = atoi(buff);
	}

	printf("enter the key element to search \n");
	if((fgets(buff, MAX, stdin)) == NULL) {
		printf("fgets is failed \n");
		exit(1);
		}

	*(buff + strlen(buff) - 1) = '\0';
	key = atoi(buff);
	
	pos = linsearch(arr, key);
	
	if(pos == 0)
		printf("key element is not present in array \n");
	else
		printf("key element %d is present at position %d \n",key, pos);

	return 0;
}


