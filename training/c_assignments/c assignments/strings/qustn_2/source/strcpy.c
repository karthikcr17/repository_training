
void *mystrncpy(char *dst, char *str, int n)
{
	int i = 0;

	while((*dst++ = *str++) && (i < n)) 
		i++;

	*dst = '\0';

}
	

