/* this program is given which endian is mechine */

#include "header.h"

union endians
{
	int x;
	char ch;
};
	
int main()
{

	union endians e1;

	e1.x = 0x6261;

	if(e1.ch == 0x61) 
		printf("this mechine is little endian \n");
	else
		printf("this mechine is big endian \n");

	return 0;
}

	

