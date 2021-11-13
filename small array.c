#include<stdio.h>
void main()
{
	int i,small,arr[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	small=arr[0];
	for(i=1;i<5;i++)
	{
		if(small<arr[i])
		{
			small=arr[i];
		}
	}
	printf("%d",small);
}
