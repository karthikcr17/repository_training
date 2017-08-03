
/* this function does selectionsort */

#include "header.h"

void selection_sort(int arr[])
{

	int i = 0;
	int j = 0;
	int min;

	for(i = 0; i < MAX - 1; i++) {
		min = i;
		for(j = i + 1; j < MAX; j++) {
			if(arr[j] < arr[min]) 
				min = j;
			}
		if(arr[i] != arr[min]) {
			arr[i] = arr[i] + arr[min];
			arr[min] = arr[i] - arr[min];
			arr[i] = arr[i] - arr[min];
		}
	}
}


