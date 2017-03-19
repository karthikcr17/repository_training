/* creating new node and assegining data */
#include "header.h"

int newdata(void) {

	char buff[MAX];
	int data;

	if((fgets(buff, MAX, stdin)) == NULL) {
		printf("fgets is failed \n");
		exit(1);
	}

	if((data = atoi(buff)) == 0) {
		printf("invalid data \n");
		newdata();
	}

	return data;
}
	
	
