
/* this function sorted given array elements by using insertion sort logic */

#include "header.h"

void insertion_sort(int arr[])
{

	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int coun = 0;

	int temp;

	for(i = 0; i < MAX - 1; i++) {
		coun = 0;
		temp = arr[i + 1];
		for(j = i; j >= 0; j--) {
			if(temp < arr[j]){
				k = j;
				coun++;
			}
		}
		if(coun != 0) {
			for(l = i + 1; l >= k; l--) 
				arr[l] = arr[l - 1];
			arr[k] = temp;
		}
	}
}
