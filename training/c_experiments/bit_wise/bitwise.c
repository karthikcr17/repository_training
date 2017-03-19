#include<stdio.h>

int main() {
	unsigned char x;
	x = 0;
	x = (char)~0;

	for(int count = 0; ((x = x >> 1) > 0); count++);

	printf("count %d\n",count);

	return 0;
}
