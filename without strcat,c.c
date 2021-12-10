#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100],str3[100],i,j;
	gets(str1);
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		str3[i]=str1[i];
	}
	str3[i]='\0';
	for(j=0;str2[j]!=0;j++,i++)
	{
		str3[i]=str2[j];
	}
	str3[i]='\0';
	printf("%s",str3);
}
