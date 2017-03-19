
/* this function returns a addres of first character in string */

char *chr_add_instr(char *buf, char ch)
{

	while(*buf) {
			if(*buf == ch) 
				return buf;
	++buf;
	}

	return 0;
}
