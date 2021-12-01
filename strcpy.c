#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],str1[100];
	int i;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!=0;i++)
	{
		str1[i]=str[i];
	}
	printf("%s",str1);
}
