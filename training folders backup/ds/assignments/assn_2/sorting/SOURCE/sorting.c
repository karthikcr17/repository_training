# include <stdio.h>
# include <stdlib.h>
# include "../HEADER/sort.h"
int i;
int j;

void bubble_sort (int a[], int n)
{
	for (i = n; i > 0; i--) {                                                 
		for (j = 0; j < i; j++) {                                               
			if (a[j] > a[j + 1]) {
				a[j] = a[j] + a[j + 1];
				a[j + 1] = a[j] - a[j + 1];
				a[j] = a[j] - a[j + 1];
			}                                                                  
		}                                                                       
	}         

}

void selection_sort (int a[], int n)
{
	for (i = 0; i < n - 1; i++) {                                             
		for (j = i + 1; j < n; j++) {                                         
			if (a[i] > a[j]) {                                                  
				a[i] = a[i] + a[j];                                             
				a[j] = a[i] - a[j];                                             
				a[i] = a[i] - a[j];                                             
			}                                                                   
		}                                                                       
	}    

}

void insertion_sort (int a[], int n)
{
	int min;

	for (i = 1; i < n; i++) {                                                 
		min = a[i];                                                             
		for (j = i - 1; j >= 0; j--) {                                          
			if (min < a[j]) {
				a[j + 1] = a[j]; 
			} else {
				break;
			}                             
		}                                                                       
		a[j + 1] = min;  
	}
}
void print_array (int a[], int n)
{
	printf ("\narray elements are:\n");
	for (i = 0; i < n; i++) {
		printf("%d\t", a[i]);
	}
	printf ("\n");
}

void read_array (int a[], int n)
{
	char str[n];

	for (i = 0; i < n; i++ ) {
		do {
			printf ("\nEnter the elements");
			if (NULL == fgets (str, n, stdin)) {
				perror ("reading input failed");
				exit (1);
			}
			a[i] = myatoi(str);
		} while (a[i] == 0);		
	}


}
