#include<stdio.h>
int main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
