
/* this function does bubblesort */

#include "header.h"

void bubblesort(int arr[])
{

	int i = 0;
	int j = 0;
	int temp;

	for(i = 0; i < MAX - 1; i++) {
		for(j = 0; j < (MAX - 1 - i); j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}


