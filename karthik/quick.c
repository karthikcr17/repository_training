#include<stdio.h>
void quicksort(int arr[],int low,int high);
void partition(int a[],int low,int high);
int main()
{
	int arr[7],i,high;
	printf("enter the elements\n");
	for(i=0;i<7;i++)
		scanf("%d",&arr[i]);
	high = (sizeof arr/sizeof arr[0])-1;
	quicksort(arr,0,high);
	for(i=0;i<high;i++)
		printf("%d ",arr[i]);
}
void quicksort(int arr[],int low,int high)
{
	int i;
	if(low<high)
	{
		j = partition(arr,low,high);

