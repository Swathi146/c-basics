#include<stdio.h>
int perfect(int);
void main()
{
	int i,n,res=0;
	scanf("%d",&n);
	res=perfect(n);
	if(res==n)
      {
			printf("PERFECT NUMBER");
      }
	else
	  {
			printf("NOT PERFECT NUMBER");
	  }
}
int perfect(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
	
	if(n%i==0)
	{
		sum=sum+i;
	}
    }
	return sum;
}

