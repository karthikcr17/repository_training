#include <stdio.h>

void find (char *);
int main ()
{
	char str[10] = "1001001000";

	find(str);

	return 0;
}

void find (char * str) 
{
	int arr[3] = {0};
	int flag = 0;
	int i;
	int j;
	int k;

	for (i = 0; *(str + i); i++) {
		flag = 0;
		if (str[i] == '1') {
			arr[0] = i;
			for (j = i + 1; * (str + j); j++) {
				if (str[j] == '1') {
					arr[1] = j; 
					for (k = j + 1; *(str + k); k++) {
						if (str[k] == '1') {
							arr[2] = k;
							if ((arr[1] - arr[0]) == (arr[2] - arr[1])) {
								flag = 1;
								break;
							} else {
								break;
							}
						}
					} // end of inner 3rd for loop
					break;
				}
			} //inner 2nd for loop
		
		}
		if (flag == 1) {
			break;
		}
	}//outer for loop
	if (flag == 1) {
		printf ("equidistant %d %d %d", arr[0], arr[1], arr[2]);
	}
	else {
		printf ("failed");
	}

}
