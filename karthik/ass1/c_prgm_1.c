#include<stdio.h>
#include<stdlib.h>
# if 1
/*program1:removes all occurrences of character c from string s
 *This program removes all occurrences of character c from string s
 */
void squeeze(char p[], char q);
int main()
{
	char s[20], c;
	printf("enter the string\n");
	scanf("%s",s);
	printf("enter the character\n");
	scanf(" %c",&c);
	squeeze(s,c); 
	printf("after removing charcter string is \n");
	printf("%s\n",s);
}
void squeeze(char p[], char q)
{
	int i, j;
	for(i=0;p[i];i++){
		if (p[i]==q){
			for(j=i;p[j];j++)
				p[j] = p[j+1];
			i = i-1;
		}
		p[j] = '\0';
	}
}

#endif
# if 0
/*converts all upper case letters to lower case.
 *program2:This is converts all upper case letters to lower case.
 */
void lower(char s[]);
int main()
{
	char s[20];
	printf("enter the string\n");
	scanf("%s",s);
	lower(s);
	printf("after converting upper to lower a string\n");
	printf("%s\n",s);
}
void lower(char p[])
{
	int i;
	for(i=0;p[i];i++){
		if(p[i]>='A'&&p[i]<='Z')
			p[i] = p[i]+32;
	}
}
# endif
# if 0
/* to check whether the given number is prime or not.
 * program3:this program to check whether the given number is prime or not.
 */
int ispalindrome(int);
int main()
{
	int num, ret;
	printf("enter the number\n");
	scanf("%d",&num);
	ret = ispalindrome(num);
	if(ret == 1)
		printf("number is prime\n");
	else
		printf("number is not prime\n");
}
int ispalindrome(int n)
{
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			break;
	if(n==i)
		return 1;
	else 
		return 0;
}
# endif
# if 0
/* program4:this program to define variables complying to the below mentioned 
   storage class specifiers auto, register, static, extern, global.
 */
extern int a;// extern storage
int b = 20;// global storage
static int c = 30;// global static
int main()
{
	auto int d = 40;// auto
	register int e = 50; // register 
	static int f = 60; // global static
	{
		auto int g = 70;
		register int h = 80;
		printf("a=%d,b=%d,c=%d,g=%d,h=%d,f=%d,d=%d,e=%d\n",a,b,c,g,h,f,d,e);
	}
	printf("a=%d,b=%d,c=%d,d=%d,e=%d,f=%d\n",a,b,c,d,e,f);
	//printf("g=%d,h=%d\n",g,h);// invalid statements
}
int a = 10;
# endif
# if 0
/* convert a decimal number to binary,octal and hexa equalent representation.
 * program5: this program converts decimal number to octal,binary and              hexa representation.
 */
int main()
{
	int bin[32], oct[11];
	char  hexa[8];
	int num, temp, j; 
	int i=0, rem=0;
	printf("enter the number\n");
	scanf("%d",&num);
	temp = num;
	do{
		rem = temp % 2;
		bin[i] = rem;
		i = i+1;
		temp = temp/2;
	}while(temp>0);
	printf("binary representation\n");
	for(j=i-1;j>=0;j--)
		printf("%d",bin[j]);
	printf("\n");
	i = 0;
	temp = num;
	do{
		rem = temp % 8;
		oct[i] = rem;
		i = i+1;
		temp = temp/8;
	}while(temp>0);
	printf("octal representation\n");
	for(j=i-1;j>=0;j--)
		printf("%d",oct[j]);
	printf("\n");
	i = 0;
	temp = num;
	do{
		rem = temp % 16;
		if(rem<10){
			hexa[i] = 48 + rem;
			i = i+1;
		}
		else{
			hexa[i] = 65 + (rem - 10);
			i = i+1;
		}
		temp = temp/16;
	}while(temp>0);
	printf("hexa representation\n");
	for(j=i-1;j>=0;j--)
		printf("%c",hexa[j]);
	printf("\n");
}
# endif

