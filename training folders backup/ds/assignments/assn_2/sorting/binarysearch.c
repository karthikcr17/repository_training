# include <stdio.h>

# define MAX 8
/********  Binary Search using Recursion  ***************/

#if 1
int binarysearch(int[], int, int, int);

int main(void)
{
	int array[MAX];
	int i;
	int num;

	printf("Enter the array elements to be sorted:");

	for(i = 0 ; i < MAX; i++) {
		scanf("%d", &array[i]);
	}
	printf ("\nenter the number you want to search:");
	scanf ("%d", &num);
		i = binarysearch(array, 0, MAX - 1, num);
	if (i) {
		printf("\n%d found at psotion %d", num, i);
	} else {
		printf ("\nGiven element not found");
	}
	return 0;
}

int binarysearch(int array[], int low, int high, int num)
{
	int mid;

	if (low <= high) {
		mid = (low + high) / 2;
		if (num == array[mid]){
			return mid + 1;
		} else if (array[mid] < num) {
			return binarysearch (array, mid + 1, high, num);
		} else {
			return binarysearch (array, low, mid - 1, num);
		}
	} else {
		return 0;
	}
}
#endif

/************ Binary search without using Recursion  ***********/

#if 0

int main (void) 
{
	int array[MAX];
	int i;
	char flag = '0'; //if number found flag is set to one
	int j = MAX - 1; 
	int num; // searching number
	int mid;   

	printf("Enter the array elements to be sorted:");

	for(i = 0 ; i < MAX; i++) {
		scanf("%d", &array[i]);
	}
	printf ("\nenter the number you want to search:");
	scanf ("%d", &num);
	
	for (i = 0 ; i <= j; i++) {
		mid = (i + j ) / 2;
		if (array[mid] == num) {
			printf ("%d", mid);
			flag = '1';
			break;
		} else if (array[mid] < num) {
			i = mid + 1;  // if number greater than middle than lower boundary is made to next postion to middle
		} else {
			j = mid - 1; // if number less than middle than upper boundary is made to prev position to middle
		}	
		i--;
	}
	if (flag) {
		printf ("\n%d found at position %d", num, mid);
	} else {
		printf ("\nNumber not found");
	}
	return 0;
}

#endif
