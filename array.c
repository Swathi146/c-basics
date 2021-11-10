#include<stdio.h>
void main()
{
	int arr[5]={23,45,56,78,87},i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
		{
			if(i%2==0)
			{
			   	printf("arr[%d]=%d\n",i,arr[i]);	
			}

	    }
}
