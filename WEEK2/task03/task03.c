#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,i;
	printf("enter the number of rounds(from 1 to 20) : ");
	scanf("%d",&n);
	if ( (n >=1)&&(n<=20))
	{
	 for(i=1;i<= 4*n;i++)
	 {
		if ( i % 4 == 0)
		{
			printf("PUM\n");
		}
		else
		{
			printf("%d	",i);
		}
	 }
	}
	else
	{
		printf("invalid number \"try to input number from 1 to 20\"");
	}
	
	
}