#include<stdio.h>
unsigned char bit_set_str(const char *);
int main()
{

	char s[10];
	unsigned ch;

	fgets(s,10,stdin);

	ch = bit_set_str(s);

	printf("%u\n",ch);

	return 0;
}
unsigned char bit_set_str(const char *s)
{

	int i = 0;
	int j = 0;
	char ch;

	int count = 0;

	while(*(s+i) != '\0') {
		ch = *(s+i);
		for(j=0; j<8; j++) {
			if(ch & (1 << j))
				count++;
		}
		i++;
	}

return (unsigned char)count;
}

