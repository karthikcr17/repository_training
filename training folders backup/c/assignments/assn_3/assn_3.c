#include <stdio.h>                                                              
#include <string.h>
#if 0                                                                         
int main (int argc, char *argv[])
{
	int i;
	int j;
	int count = 0;

	printf ("no of files in the current folder: %d", argc - 1);

	for (i = 0 ; i < argc ; i++) {
		for (j = 0 ; argv[i][j] != '\0' ; j++) {
			if (argv[i][j] == '.' && argv[i][j + 1] == 'c' &&
						argv[i][j + 2] == '\0') {
				count++;
			}
		}
	}
	printf ("\nno of .c files are %d\n", count);                                    
	return 0;                                                                   
                                                                                
                                                                                
}                                                                               
#endif

#if 1
void (*func)(int a, int b, char *str);
void oper(int , int, char *);

int main(int argc, char *argv[]) 
{
	int n;

	if ( argc == 4 ) {

		a = myatoi ( *( argv + 2 ) ); 
		b = myatoi ( * ( argv + 3 ) );
		func = oper;
		func(a, b, *(argv + 1));
	} else {
		printf ("improper number of arguments");
	}
	return 0;
}

void oper(int a, int b, char *(argv)) 
{	
	if(!(strcmp(argv, "add"))) {
		printf("%d", (a + b)); 
	} else if(!(strcmp(argv, "sub"))) {
		printf("%d", (a - b)); 
	} else if(!(strcmp(argv , "mul"))) {
		printf("%d", (a * b)); 
	} else if(!(strcmp(argv, "div"))) {
		printf("%d", (a / b)); 
	} else {
		printf("Invalid input");
	} 
	
}

int myatoi(char *str)
{
	int i = 0;
	int n = 0;
	
	if(str[0] == '-') {
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9') {
		n = 10 * n + (str[i] - '0');
		i++;
	}

	if(str[0] == '-') {
		n = -n;
	}

	return n;
}
#endif
