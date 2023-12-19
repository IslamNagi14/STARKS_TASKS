#include <stdio.h>
#include <stdlib.h>
void main()
{
	int Aa,Bb,Cc,Vv;
	printf("enter the amount of father : ");
	scanf("%d",&Aa);
	printf("enter the amount of mother : ");
	scanf("%d",&Bb);
	printf("enter the amount of Takahashi : ");
	scanf("%d",&Cc);
	printf("enter the remaining milliliters of shampoo : ");
	scanf("%d",&Vv);
	while(1)
	{
		if(Vv<Aa)
		{
			printf("F");
			break;
		}
		Vv-=Aa;
		if(Vv<Bb)
		{
			printf("M");
			break;
		}
		Vv-=Bb;
		if(Vv<Cc)
		{
			printf("T");
			break;
		}
		Vv-=Cc;
		
	}
	
	
	
}