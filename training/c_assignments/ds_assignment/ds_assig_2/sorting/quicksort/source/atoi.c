#include"header.h"

int atoint(char ch[])
{
	int i;	//index
	int integer = 0;	//stores the integer value
	
	/* converts to alphabets to integer*/
	for(i = 0; ch[i]; ++i)	{
		if(ch[i] >= '0' && ch[i] <= '9')
			integer = 10 * integer + (ch[i] - '0');	
	}
	return integer;
}
