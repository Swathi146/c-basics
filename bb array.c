#include<stdio.h>
void main()
{
	int i,large,arr[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	large=arr[0];
	for(i=1;i<5;i++)
	{
		if(large>arr[i])
		{
			large=arr[i];
		}
	}
	printf("%d",large);
}
