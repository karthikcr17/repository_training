#include <stdio.h>
#if 0
int main ()
{
	int p1[3] = {1,2,3};
	int p2[3] = {4,5,6};

//	p1 = p2;

	printf ("%s", (char *)p1);

	return 0;
}
#endif

#if 0 

int main ()
{

	char arr[][3] = {{'1','2'},{'4','5'}};

	printf("%s", *(arr +1));

	return 0;


}
#endif

#if 0

int main ()
{

	int a[4] = {[0] = 1,[2] = 2};

	printf("%d%d%d%d",a[0],a[1],a[2],a[3]);

	return 0;

}
#endif

#if 1
int main()
{
	int p[][3] ={1,2,3,4};
	printf("%d", p[(123 > 356)?0:1][(356 >123)?1:0]);

	return 0;



}
#endif
