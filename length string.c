#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int i,len;
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++)
	{
	   len++;
	}
	len=i;
	printf("%d",i);
}
