#include<stdio.h>
int main()
{
	int i,j,n,arr[10],flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				flag=1;
				printf("%d",arr[i]);
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("element found");
	}
	else
	{
		printf("duplicate element found");
	}
}
