#include<stdio.h>
unsigned long long fibonacci(unsigned int *n)
{
	int y=1,x=0,count=0;
	
	for(int i =0;i>=0;i++)
	{
		if(i == (x+y))
		{
		    count++;
            if(*n==count)
			{
			*n =x;
			}
			x = y;
			y = i;
			
		}
		
	}
	
	
	return y;
}
