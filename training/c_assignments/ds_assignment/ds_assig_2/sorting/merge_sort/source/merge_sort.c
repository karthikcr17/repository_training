
/* this function does merge sort */

#include "header.h"

void merge_sort(int arr[], int l, int r)
{

	int mid;

	if(l < r) {

		mid = (l + r) / 2;

		merge_sort(arr, l, mid);
		merge_sort(arr, mid + 1, r);

		mergs(arr, l, mid, r);	
	}
}

void mergs(int arr[], int l, int mid, int r)
{


	int temp[MAX];

	int i = l;
	int j = mid + 1;
	int k = 0;

	while((i <= mid) && (j <= r)) {
		if(arr[i] < arr[j]) {
			temp[k++] = arr[i];
			i++;
		}
		else if(arr[i] > arr[j]) {
			temp[k++] = arr[j];
			j++;
		}
	}
	while(i <= mid) {
		temp[k++] = arr[i];
		i++;
	}
	while(j <= r) {
		temp[k++] = arr[j];
		j++;
	}
	for(i = r; i >= l; i--)
		arr[i] = temp[--k];
}




