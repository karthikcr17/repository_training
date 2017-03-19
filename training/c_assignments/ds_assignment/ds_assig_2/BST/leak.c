#include<stdio.h>
#include<stdlib.h>
int main(){
	char *p = NULL;
	p = malloc(100);
	free(p);
	p = NULL;
	return 0;
}
