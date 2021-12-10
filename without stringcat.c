#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],ch,rpc;
	int i,len;
	scanf("%[^\n]s",&str);
	fflush(stdin);
	printf("enter the character");
	scanf("%c",&ch);
	fflush(stdin);
	printf("replace the character");
	scanf("%c",&rpc);
	fflush(stdin);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(ch==str[i])
		{
			str[i]=rpc;
		}
	}
	printf("%s\n",str);
}
