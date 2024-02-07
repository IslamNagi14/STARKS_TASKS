#include<stdio.h>
unsigned long long fibonacci(unsigned int *n)
{
	int y=1,x=0,count=0,r;
	r=*n;
	for(int i =0;i>=0;i++)
	{
		if(i == (x+y))
		{
		    count++;
            if(r==count)
			{
			*n = x;
			}
			//printf("%d is %d\n",count,x);
			x = y;
			y = i;
			
		}
		
	}
	
	
	return y;
}
