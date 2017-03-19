/* linear search for arrays */

#include "header.h"

int linsearch(int arr[], int key)
{

	int i;

	for(i = 0; i < MAX; i++) 
		if(arr[i] == key)
			return (i + 1);

	return 0;
}
