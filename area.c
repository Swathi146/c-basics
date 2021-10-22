#include<stdio.h>
int main()
{
	int areaofsquare,areaofrectangle,areaoftriangle,simpleinterest,side,l,b,base,height,p,n,r,choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : scanf("%d",&side);
		         areaofsquare=side*side;
		         printf("%d",areaofsquare);
		         break;
		case 2 : scanf("%d%d",&l,&b);
		         areaofrectangle=l*b;
		         printf("%d",areaofrectangle);
		         break;
		case 3 : scanf("%d%d",&base,&height);
		         areaoftriangle=(base*height)/2;
		         printf("%d",areaoftriangle);
		         break;
		case 4 : scanf("%d%d%d",&p,&n,&r);
		         simpleinterest=(p*n*r)/100;
				 printf("%d",simpleinterest);
				 break; 
		default : printf("invalid input");
	}
}


