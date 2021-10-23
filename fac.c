#include<stdio.h>
int main()
{
  int i,n,fact=1;
  scanf("%d%d",&i,&n);
  for(i;i<=n;i++)
  {
  	if(n%i==0)
  	{
  		printf("%d\n",n);
    }
  }	
}
