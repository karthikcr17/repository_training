#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>
void myprintf (int , int);
int main(void)
{

	int n;
	int ch = 4121;
	n = 2;
	myprintf(n, ch);
	return 0;

}
void myprintf (int n, int ch)
{	int i;
	int str[10];
	if (n == 2) {	
	while(ch) {
	str[i]= 0x30 +( ch % 10);
	ch = ch/10;
	write (1, str ,sizeof(ch));
	i ++;
}	
	}

}
