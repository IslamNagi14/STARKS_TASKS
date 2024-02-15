#include<stdio.h>
#include<string.h>
/*
void main (void)
{
	char num[32767];int x =0;
	printf("enter any number : ");
	scanf("%s",&num);
	int i = 0,j = 0;
	for(int i = 0;i < strlen(num);i++)
	{
		for(int j = 0;j < strlen(num);j++)
	    {
		    if(i == j)
				continue;
		        if(num[i] == num[j])
		        {
			      x = 1;
			      break;
		       }
	    }
	}
	if(x)
	{printf("Yes");}
    else
	{printf("No");}
}*/
/*
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
}*/