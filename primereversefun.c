#include<stdio.h>
int factorcount(int);
void main()
{
	int n,rev=0,fc=0;
	scanf("%d",&n);
	fc=factorcount(n);
	if(fc==2)
	{
		printf("prime");
		rev=reverse(n);
		fc=factorcount(rev);
		if(fc==2)
		{
			printf("circular prime");
		}
		else
		{
			printf("not a circular");
		}
    }
	else
	{
		printf("not prime");
	}	
}
int factorcount(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0) 
		{
			count++;
		}
	}
	return count;
}
int reverse(int n)
{
	int i,r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+i;
		n=n/10;
	}
	return sum;
}
