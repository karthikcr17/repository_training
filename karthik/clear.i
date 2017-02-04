stdio.h
#define MAX 10

int main()
{

	
	
	int num, i, p, n;
	num = 10;
	scanf("%d",&num);
	for(i=31; i>=0; i--)
		printf("%d",(num >> i) & 1);
	printf("\n");
	num = num | (num + 1); 
	for(i=31; i>=0; i--)
		printf("%d",(num >> i) & 1);
	printf("\n");
}
	
