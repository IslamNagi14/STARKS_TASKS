#include<stdio.h>

void main (void)
{
	int check[10] = {0};
	int x = 0 , num;
	printf("enter any number : ");
	scanf("%d",&num);
	
	for(;num;)
	{
	    if ( check[num % 10] == 1)
	    {
		   x = 1;
	       break;
            }
	check[num % 10] = 1 ;
	num/=10;
	    
	}
	if(x)
	{printf("Yes");}
    else
	{printf("No");}
}
