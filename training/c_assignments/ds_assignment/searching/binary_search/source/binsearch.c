
#include "header.h"

int binsearch(int arr[], int key)
{
	int i = 0;
	int j = 0;
	int temp;
	int high;
	int low;
	int mid;

	high = MAX - 1;
	low = 0;

	for(i = 0; i < MAX - 1; i++) {
		for(j = i + 1; j < MAX; j++) {
			if(arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	 while(low <= high) {

		mid = (high + low) / 2;

		if(key == arr[mid])
			return 1;
		else if(key < arr[mid]) 
			high = (mid - 1);
		else if(key > arr[mid])
			low = (mid + 1);
		}
	return 0;
}
					
