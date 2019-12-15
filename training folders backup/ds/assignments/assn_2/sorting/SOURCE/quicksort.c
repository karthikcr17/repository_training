# include <stdio.h>

void quicksort(int array[], int low, int high)
{
	int pivot;
	int i;
	int j;

	i = low;
	j = high;

	pivot = array[i];
	i++;

	if (low < high) {

		while (i <= j) {
			while (array[i] < pivot)
				i++;
			while (array[j] > pivot)
				j--;
			if (i < j) {
				array[i] = array[i] + array[j];
				array[j] = array[i] - array[j];
				array[i] = array[i] - array[j];	
				i++;
				j--;
			} else if (i > j) {
				i++;
			} else {
				break;
			}	
		
		}
		array[low] = array[j];
		array[j] = pivot;
		quicksort(array, low, j - 1);
		quicksort(array, j + 1, high);
	}
}
