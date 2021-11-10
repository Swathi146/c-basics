#include<stdio.h>
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
    {
    	scanf("%d",& arr[i]);
	}
	for(i=0;i<5;i++)
	{
    	if(arr[i]%3==0)
    	{
	    	printf("arr[%d]=%d\n",i,arr[i]);	
    	}
    }
}

