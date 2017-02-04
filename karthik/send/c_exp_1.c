#include<stdio.h>
#include<string.h>
//experiment 1: this is hello world program   (starting program_Q.1)
#if 0
main()
{
	printf("hello, world \n");

}
#endif



//experiment 2:errors in various parts of hello world program   (starting program_Q.2)
#if 0
main()
{

//	printf("hello, world \n")

	/*OUTPUT: it is a translator stage  error
	semicoloun is expected at the end of instruction*/



//	printf("hello, world \n);

	/* OUTPUT: it is a translator stage error
	inverted coma (")is expected in printf statement befor)    */


//	print("hello, world \n");

	/*OUTPUT: it is a linker stage error
	undefined refference print( print is not available in the compailer library)*/ 

	printf("hello, world \n";
}
/*OUTPUT: it is a translator stage  error
  ')' is expected before terminating the instruction with ';' */
#endif




//experiment 3: having '\c' in printf instruction  (starting program_Q.3)
#if 0 
main()
{
printf("hello, world \c\n");
}
#endif
/*warning: unknown escape sequence:\c
 * provides output: hello, world c
 */




#if 0
//experement 4 & 4(a): farenheit to celsius table(0-300)      (starting program_Q.4)
main()
{
	int fahr;			
	int celsius;			

	fahr = 0;
	printf("\n----------------------------------------\n");
	//printf("fahrenheit\tcelsius\n");//4.(a)
	printf("__________\t________\n");
	while(fahr <= 300)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, celsius);
		fahr=fahr+20;
	}

}
#endif

#if 0
//experement 4(b): celsius to fahrenheit table(0-300)      (starting program_Q.4)
main()
{
	int fahr;			
	int celsius;			

	celsius = 0; 
	printf("\n----------------------------------------\n");
	printf("celsius\tfahrenheit\n");//4.(a)
	printf("__________\t________\n");

	while(celsius <= 300)
	{
		fahr = (9*celsius)/5+32;
		printf("%d\t\t%d\n", celsius, fahr);
		celsius+=20;
	}

}
#endif


#if 0
//experement 4(c): farenheit to celsius table(300-0)      (starting program_Q.4)
main()
{
	int fahr;			
	int celsius;			

	fahr = 300;
	printf("\n----------------------------------------\n");
	while(fahr >= 0)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, celsius);
		fahr=fahr-20;
	}

}
#endif

#if 0
//experement 4(d): farenheit to celsius table(0-300)using subfunction       (starting program_Q.4)
void conversion(int);
main()
{
	int fahr;			

	fahr = 0;
	conversion(fahr);
}
void conversion(int fahr)
{
	int celsius;			
	printf("\n----------------------------------------\n");
	printf("fahrenheit\tcelsius\n");
	printf("__________\t________\n");
	while(fahr <= 300)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, celsius);
		fahr=fahr+20;
	}

}
#endif

#if 0
//experiment 5: copies its input to its output one character at a time(starting program_Q.5 )
main()
{
	int c;	

	while ((c = getchar()) != '$')
		putchar(c);
}
#endif

#if 0	
//experiment 6: print the value of 6(starting program_Q.6)
main()
{
	printf("%d",EOF);
}
#endif


#if 0
//experiment 7: counting no. of lines (starting program_Q.7)
main(int argc,char *argv[])
{
	FILE *fp;
	int c=0;
	char ch;
	if(argc!=2)
	{
		printf("wrong commands\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is empty\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
			c++;
	}
	fclose(fp);
	printf("%d \n",c);
}
#endif


#if 0
//experiment 8: counting lines, tabs, spaces in a file(starting program_Q.8)
int main(int argc,char *argv[])
{
	FILE *fp;
	int c=0,s=0,t=0;
	char ch;
	if(argc!=2)
	{
		printf("wrong commands\n");
		return 0;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is empty\n");
		return 0;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
			c++;
		if(ch==' ')
			s++;
		if(ch=='\t')
			t++;
	}
	fclose(fp);
	printf("n-%d t-%d s-%d \n",c,t,s);
}
#endif



#if 0 
//experiment 9:replacing more spaces with single space in a file(starting program_Q.9)
int main(int argc,char *argv[])
{
	FILE *fp;
	char s[30];
	//char ch;
	if(argc!=2)
	{
		printf("wrong commands\n");
		return 0;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is empty\n");
		return 0;
	}
        while(fscanf(fp,"%s",s)!=EOF)
	{
	printf("%s ",s);
	}
	printf("\n");
}

#endif


#if 1
//experiment 10: replacing tab with '\t', backslash with \\ (starting program_Q.10)
int main()
{
  int c;

  while((c=getchar())!='$')
  {
    if(c=='\t')
    {
      putchar('\\');
      putchar('t');
    }

    if(c=='\\')
    {
      putchar('\\');
      putchar('\\');
    }

    if(c !='\t' && c!= '\\')
      putchar(c);
  }

}

#endif	









