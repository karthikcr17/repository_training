# include <stdio.h>
# include <stdlib.h>
# include "../HEADER/sort.h"

# define MAX 10

int main (void)
{
	char input[MAX] ;
	int array[MAX];
	int i;
	char ch;

	printf ("\n1.Selection sort\n2.Bubble Sort\n3.Insertion sort\n4.Merge Sort");
	printf("\n5.Quick Sort");
	printf ("\nEnter the choice");
	if (NULL == (fgets (input, MAX, stdin))) {
		perror ("reading input failed");
		exit (1);
	}
	switch (myatoi(input)) {
		case 1:
			read_array (array, MAX);
			selection_sort (array, MAX);
			printf ("\nSorted using Selection sort:\n"); 
			print_array (array, MAX);
			break;
		case 2:
			bubble_sort (array, MAX);
			printf ("\nSorted using bubble  sort:\n"); 
			print_array (array, MAX);
			break;
		case 3:
			insertion_sort (array, MAX);
			printf ("\nSorted using Insertion sort:\n"); 
			print_array (array, MAX);
			break;
		case 4:
			mergeSort (array, 0, MAX - 1);
			printf ("Sorted using merge sort:\n");
			print_array (array, MAX);
			break;
		case 5:
			quicksort (array, 0, MAX - 1);
			printf ("\nSorted using quick sort");
			print_array (array, MAX);
			break;

		default :
			printf("\nyou entered invalid option");
	}

	return 0;
}

