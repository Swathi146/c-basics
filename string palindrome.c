#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,len;
	gets(str);
	len=strlen(str);
	for(i=0;i<(len/2);i++)
	{
		if(str[i]!=str[len-1-i])
		{
			break;
		}
	}
		if(i==(len/2))
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
