#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case '+': scanf("%d%d",&a,&b);
		          c=a+b;
		          printf("%d",c);
		          break;
		case '-': scanf("%d%d",&a,&b);
		          c=a-b;
				  printf("%d",c);
	    case '*': scanf("%d%d",&a,&b);
		          c=a*b;
				  break;
	    case '/': scanf("%d%d",&a,&b);
		          c=a/b;
				  break;
	    case '%': scanf("%d%d",&a,&b);
		          c=a%b;
				  break;
	    default : printf("please enter valid sign");			 			 			 			          
	}
}
