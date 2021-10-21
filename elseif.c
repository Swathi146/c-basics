#include<stdio.h>
int main()
{
	int social,science,hindi,maths,english,total,percentage;
	scanf("%d%d%d%d%d",&social,&science,&hindi,&maths,&english);
	total=social+science+hindi+maths+english;
	percentage=(total*100)/500;
	if(percentage>=90)
	{
		printf("A+");
	}
	else if(percentage>=80)
	{
		printf("A");
	}
	else if(percentage>=70)
	{
		printf("B");
	}
	else if(percentage>=60)
	{
		printf("C");
	}
	else if(percentage>=50)
	{
		printf("D");
	}
	else
	{
		printf("FAIL");
	}
}
