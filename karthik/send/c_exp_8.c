#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#if 1
int* binary_search(int a[],int key,int first,int last);
int main()
{
int a[]={20,35,37,40,45,50,51,55,67};
int l,key;
int *p=&a;
l=sizeof a/sizeof a[0];
//printf("%d\n",l);
printf("enter key to search: \t");
scanf("%d",&key);
int *f=binary_search(a[],key,0,l-1);
if(f)
printf("key is found \n");
else
printf("key not found\n");
}
int* binary_search(int a[],int key,int first,int last)
{
int middle,found;
found=0;
while((first<=last) && !found)
{
middle=(first+last)/2;
if(a[middle]==key)
found=1;
else if(a[middle]<key)
first=middle+1;
else
last=middle-1;
}
if(found)
return middle;
else
return 0;

}
#endif




